/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:16:37 by momalek           #+#    #+#             */
/*   Updated: 2024/10/12 11:16:39 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char *str1 = "Hello, World!";
    char *str2 = "Hells, there!";


    int result = ft_strncmp(str1, str2, 5);
    printf("Comparing '%s' and '%s' (n = 5): %d\n", str1, str2, result); 

    return 0;
}
*/
