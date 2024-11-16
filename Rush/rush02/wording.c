/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wording.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:57:48 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/20 23:34:02 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "utility.h"
#include "dictionary.h"
#include "wording.h"

char	*get_ten_to_power(int power)
{
	char	*ten_to_power;
	int		i;

	ten_to_power = malloc(power * sizeof(int) + 2);
	ten_to_power[0] = '1';
	i = 1;
	while (i <= power)
	{
		ten_to_power[i] = '0';
		i++;
	}
	ten_to_power[i] = '\0';
	return (ten_to_power);
}

char	*get_edited_number(char *number)
{
	int		number_length;
	int		edited_number_length;
	char	*edited_number;
	int		zeros_to_add;
	int		i;

	number_length = ft_strlen(number);
	zeros_to_add = 0;
	if (number_length % 3)
		zeros_to_add = 3 - number_length % 3;
	edited_number_length = zeros_to_add + number_length + 1;
	edited_number = malloc(edited_number_length * sizeof(char));
	i = 0;
	while (i < edited_number_length)
	{
		if (i < zeros_to_add)
			edited_number[i] = '0';
		else
			edited_number[i] = number[i - zeros_to_add];
		i++;
	}
	edited_number[edited_number_length - 1] = '\0';
	return (edited_number);
}

void	say2digits(char three_ds[4], struct s_pair *dict, unsigned int pairs_n)
{
	char	two_digits[3];

	two_digits[2] = '\0';
	two_digits[0] = three_ds[1];
	two_digits[1] = '0';
	if (three_ds[1] == '1')
		two_digits[1] = three_ds[2];
	if (three_ds[0] != '0')
		ft_putstr(" ");
	ft_putstr(find(two_digits, dict, pairs_n));
}

void	say3digits(char three_ds[4], struct s_pair *dict, unsigned int pairs_n)
{
	char	one_digit[2];
	int		i;

	i = -1;
	while (i < 4)
	{
		i++;
		if (three_ds[i] == '0' && i != 2)
			continue ;
		if (i == 0 || i == 2)
		{
			if ((three_ds[0] != '0' || three_ds[1] != '0') && i == 2)
				ft_putchar(' ');
			ft_chtostr(three_ds[i], one_digit);
			ft_putstr(find(one_digit, dict, pairs_n));
			if (i == 0)
				ft_putstr(" hundred");
		}
		else if (i == 1)
		{
			say2digits(three_ds, dict, pairs_n);
			if (three_ds[2] == '0' || three_ds[1] == '1')
				break ;
		}
	}
}

void	say_number(char *number, struct s_pair *dict, unsigned int pairs_n)
{
	char	*edited_number;
	char	three_digit[4];
	char	*ten_to_power;
	char	*edited_number_to_free;

	edited_number = get_edited_number(number);
	edited_number_to_free = edited_number;
	while (*edited_number)
	{
		ft_strlcpy(three_digit, edited_number, 4);
		say3digits(three_digit, dict, pairs_n);
		if (ft_strlen(edited_number) > 3)
		{
			ft_putchar(' ');
			ten_to_power = get_ten_to_power(ft_strlen(edited_number) - 3);
			ft_putstr(find(ten_to_power, dict, pairs_n));
			free(ten_to_power);
		}
		edited_number += 3;
		if (*edited_number)
			ft_putchar(' ');
	}
	ft_putchar('\n');
	free(edited_number_to_free);
}
