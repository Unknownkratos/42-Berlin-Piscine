/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:56:51 by momalek           #+#    #+#             */
/*   Updated: 2024/10/09 16:57:06 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
		{
			return (0);
		}
		index++;
	}
	return (1);
}

/*
#include <unistd.h>

int main(void)
{
	if (ft_str_is_numeric("12345"))
		write(1, "True\n", 5);
	else
		write(1, "False\n", 6);

	if (ft_str_is_numeric("123a45"))
		write(1, "True\n", 5);
	else
		write(1, "False\n", 6);

	return (0);
}
*/
