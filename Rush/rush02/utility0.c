/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:41:50 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/20 21:47:50 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utility.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_isspace(char c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

int	ft_isnumeric(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_isprintable(char c)
{
	return (' ' <= c && c <= '~');
}
