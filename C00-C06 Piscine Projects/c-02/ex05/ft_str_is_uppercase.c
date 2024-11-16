/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:59:16 by momalek           #+#    #+#             */
/*   Updated: 2024/10/09 17:00:06 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
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
	if (ft_str_is_uppercase("ABCDE"))
		write(1, "True\n", 5);
	else
		write(1, "False\n", 6);

	if (ft_str_is_uppercase("ABcDE"))
		write(1, "True\n", 5);
	else
		write(1, "False\n", 6);

	return (0);
}
*/
