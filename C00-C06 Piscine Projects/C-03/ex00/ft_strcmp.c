/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:59:47 by momalek           #+#    #+#             */
/*   Updated: 2024/10/12 10:59:54 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>
int main()
{
	char *str1 = "Hello";
	char *str2 = "Hello";
	char *str3 = "World";

	printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparing '%s' and '%s': %d\n", str3, str1, ft_strcmp(str3, str1));
	return 0;
}
*/
