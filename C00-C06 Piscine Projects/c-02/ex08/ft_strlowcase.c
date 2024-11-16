/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:40:27 by momalek           #+#    #+#             */
/*   Updated: 2024/10/10 15:40:32 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
/*
#include <unistd.h>

int	main(void)
{
	char	str1[] = "HELLO WORLD";
	char	str2[] = "HeLLo WoRLD";

	ft_strlowcase(str1);
	ft_strlowcase(str2);

	write(1, str1, 12);
	write(1, "\n", 1);
	write(1, str2, 12);
	write(1, "\n", 1);

	return (0);
}
*/
