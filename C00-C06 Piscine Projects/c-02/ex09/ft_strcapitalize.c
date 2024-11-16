/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:38:06 by momalek           #+#    #+#             */
/*   Updated: 2024/10/10 18:37:07 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 1;
	ft_strtolower(str);
	while (str[i] != '\0')
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if ((str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= 'a' && str[i] <= 'z'))
			capitalize_next = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			capitalize_next = 0;
		else
			capitalize_next = 1;
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
int main(void)
{
    char str1[] = "salut, !comment tu ? 42mots quarante-deux; cinquante+et";
    char str2[] = "42hello world! this is a test.";


    ft_strcapitalize(str1);
    write(1, str1, 72); 
    write(1, "\n", 1);


    ft_strcapitalize(str2);
    write(1, str2, 30); 
    write(1, "\n", 1);

    return 0;
}
*/
