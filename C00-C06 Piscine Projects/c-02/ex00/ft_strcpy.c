/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:40:35 by momalek           #+#    #+#             */
/*   Updated: 2024/10/09 14:30:35 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main() {
    char src[] = "Hello, World!";
    char a[50]; 

    ft_strcpy(a, src);

    printf("src: %s\n", src);
    printf("a: %s\n", a);

    return 0;
}
*/
