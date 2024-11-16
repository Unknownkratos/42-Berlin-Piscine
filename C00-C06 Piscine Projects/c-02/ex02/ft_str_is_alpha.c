/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momalek <momalek@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:55:09 by momalek           #+#    #+#             */
/*   Updated: 2024/10/09 16:55:29 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;
	char	curr;

	index = 0;
	while (str[index] != '\0')
	{
		curr = str[index];
		if (!((curr >= 'A' && curr <= 'Z') || (curr >= 'a' && curr <= 'z')))
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
    char *test1 = "HelloWorld";
    char *test2 = "Hello123";

    write(1, "Test 1: ", 8);
    if (ft_str_is_alpha(test1))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);

    write(1, "Test 2: ", 8);
    if (ft_str_is_alpha(test2))
        write(1, "True\n", 5);
    else
        write(1, "False\n", 6);

    return (0);
}
*/
