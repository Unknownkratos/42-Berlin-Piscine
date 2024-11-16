/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:53:04 by momalek           #+#    #+#             */
/*   Updated: 2024/10/09 17:53:15 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main(void)
{
	char	str1[] = "hello world";
	char	str2[] = "HeLLo WoRLD";

	ft_strupcase(str1);
	ft_strupcase(str2);

	write(1, str1, 12);
	write(1, "\n", 1);
	write(1, str2, 12);
	write(1, "\n", 1);

	return (0);
}
*/
