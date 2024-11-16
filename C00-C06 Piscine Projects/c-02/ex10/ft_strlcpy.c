/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:42:05 by momalek           #+#    #+#             */
/*   Updated: 2024/10/10 16:42:06 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	while (src[count] != '\0')
		count++;
	if (size > 0)
	{
		index = 0;
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}
/*
#include <unistd.h>
int	main(void)
{
	char src[] = "Hello, World!";
	char dest[20];

	unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

	write(1, dest, len);
	write(1, "\n", 1);
	return (0);
}
*/
