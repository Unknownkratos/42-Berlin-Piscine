/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:57:39 by momalek           #+#    #+#             */
/*   Updated: 2024/10/09 16:58:31 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*
#include <unistd.h>

int	main(void)
{
	if (ft_str_is_lowercase("abcdef"))
		write(1, "True\n", 5);
	else
		write(1, "False\n", 6);

	if (ft_str_is_lowercase("abCedf"))
		write(1, "True\n", 5);
	else
		write(1, "False\n", 6);

	return (0);
}
*/
