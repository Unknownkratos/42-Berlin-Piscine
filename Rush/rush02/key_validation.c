/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:16:08 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/20 22:45:05 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "wording.h"
#include "dictionary.h"
#include "key_validation.h"

int	ttp_keys_valid(struct s_pair *dictionary, unsigned int pairs_n)
{
	int		i;
	char	*number;

	i = 2;
	while (i <= 36)
	{
		number = get_ten_to_power(i);
		if (find(number, dictionary, pairs_n) == NULL)
		{
			free(number);
			return (0);
		}
		free(number);
		i += 1 + (i > 2) * 2;
	}
	return (1);
}

int	keys_are_valid(struct s_pair *dictionary, unsigned int pairs_n)
{
	int		i;
	char	one_digit[2];
	char	two_digits[3];

	i = 0;
	while (i < 10)
	{
		one_digit[0] = '0' + i;
		if (find(one_digit, dictionary, pairs_n) == NULL)
			return (0);
		i++;
	}
	while (i <= 90)
	{
		two_digits[0] = (i / 10) + '0';
		two_digits[1] = (i % 10) * (i < 20) + '0';
		if (find(two_digits, dictionary, pairs_n) == NULL)
			return (0);
		i += 1 + (i > 19) * 9;
	}
	return (ttp_keys_valid(dictionary, pairs_n));
}
