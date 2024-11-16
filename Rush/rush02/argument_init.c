/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:57:06 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/21 13:34:02 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "utility.h"
#include "argument_init.h"

int	get_number_length(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0' && ft_isnumeric(str[length]))
		length++;
	return (length);
}

char	*get_validated_number(char *number)
{
	// number: "      +12312q12312oioqiwejfoiwq"
	int		i;
	int		j;
	int		validated_number_length;
	char	*validated_number;

	i = 0;
	while (ft_isspace(number[i]))
		i++;
	// i: 6
	if (number[i] == '-')
		return (NULL);
	if (number[i] == '+')
		i++;
	// i: 7
	validated_number_length = get_number_length(&number[i]);
	if (validated_number_length < 1)
		return (NULL);
	validated_number = malloc((validated_number_length + 1) * sizeof(char));
	j = 0;
	while (j < validated_number_length)
	{
		validated_number[j] = number[i];
		j++;
		i++;
	}
	validated_number[j] = '\0';
	return (validated_number); // "12312"
}

char	*get_dictionary_filename(int argc, char *argv[])
{
	char	*filename;

	if (argc == 2)
	{
		filename = malloc((ft_strlen("numbers.dict") + 1) * sizeof(char));
		ft_strcpy(filename, "numbers.dict");
	}
	if (argc == 3)
	{
		filename = malloc((ft_strlen(argv[1]) + 1) * sizeof(char));
		ft_strcpy(filename, argv[1]);
	}
	if (argc > 3 || argc < 2)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	return (filename);
}
