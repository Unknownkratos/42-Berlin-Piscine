/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:04:46 by momalek           #+#    #+#             */
/*   Updated: 2024/10/09 17:04:55 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < ' ' || str[index] == 127)
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
	if (ft_str_is_printable("Hello, World!"))
		write(1, "True\n", 5);
	else
		write(1, "False\n", 6);

	if (ft_str_is_printable("Hello\x1FWorld"))
		write(1, "True\n", 5);
	else
		write(1, "False\n", 6);

	return (0);
}
*/
