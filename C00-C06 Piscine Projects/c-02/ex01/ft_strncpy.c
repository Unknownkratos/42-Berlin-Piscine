/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:37:07 by momalek           #+#    #+#             */
/*   Updated: 2024/10/13 13:45:30 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int				i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
 int main() {
    char src[] = "Hello, World!";
    char a[50];
    unsigned int n = 5;   

    ft_strncpy(a, src, n);

    printf("Source: %s\n", src);
    printf("Destination (first %u chars): %s\n", n, a);

    return 0;
}
*/
