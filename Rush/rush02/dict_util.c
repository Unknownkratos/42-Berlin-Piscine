/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:57:15 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/21 13:57:19 by momalek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "utility.h"
#include "dictionary.h"
#include "dict_util.h"
#include "key_validation.h"

int	count_lines(char *text)
{
	int	number_of_lines;

	number_of_lines = 1;
	while (*(text + 1))
	{
		if (*text == '\n' && *(text + 1) != '\n' /*mistake:  && *(text + 1) != '\0'*/)
			number_of_lines++;
		text++;
	}
	return (number_of_lines);
}

int	initialise_key(char *text, struct s_pair *dictionary, int i)
{
	int	current_key_length;

	current_key_length = 0;
	while (ft_isnumeric(text[current_key_length]))
		current_key_length++;
	dictionary[i].key = malloc((current_key_length + 1) * sizeof(char));
	ft_strlcpy(dictionary[i].key, text, current_key_length + 1);
	return (current_key_length);
}

int	initialise_value(char *text, struct s_pair *dictionary, int i)
{
	int	current_value_length;

	current_value_length = 0;
	while (text[current_value_length] != '\n'
		&& text[current_value_length] != '\0'
		&& ft_isprintable(text[current_value_length]))
		current_value_length++;
	dictionary[i].value = malloc((current_value_length + 1) * sizeof(char));
	ft_strlcpy(dictionary[i].value, text, current_value_length + 1);
	return (current_value_length);
}

struct s_pair	*parse_and_validate(char *text, int number_of_pairs)
{
	struct s_pair	*dictionary;
	int				i;

	dictionary = malloc(number_of_pairs * sizeof(struct s_pair));
	i = 0;
	while (*text)
	{
		text += initialise_key(text, dictionary, i);
		while (ft_isspace(*text))
			text++;
		if (*text != ':')
			return (NULL);
		text++;
		while (ft_isspace(*text))
			text++;
		text += initialise_value(text, dictionary, i);
		if (*text != '\n' && *text != '\0')
			return (NULL);
		text++;
		i++;
	}
	if (!keys_are_valid(dictionary, number_of_pairs))
		return (NULL);
	return (dictionary);
}
