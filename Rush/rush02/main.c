/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:53:58 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/20 23:16:30 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "dict_util.h"
#include "file_utility.h"
#include "wording.h"
#include "utility.h"
#include "dictionary.h"
#include "argument_init.h"

void	free_memory(char *dict_filename, char *number, char *dict_text)
{
	free(dict_text);
	free(number);
	free(dict_filename);
}

int	argc_is_valid(int argc)
{
	if (argc == 1 || argc > 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int	dict_is_valid(struct s_pair *dict, int number_of_pairs)
{
	if (dict == NULL || number_of_pairs < 41)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	struct s_pair		*dictionary;
	char				*number;
	char				*dict_filename;
	int					number_of_pairs;
	char				*dict_text;

	if (!argc_is_valid(argc))
		return (1);
	number = get_validated_number(argv[1 + (argc == 3)]);
	dict_filename = get_dictionary_filename(argc, argv);
	dict_text = get_filetext(dict_filename);
	if (dict_filename == NULL || dict_text == NULL || number == NULL)
	{
		free_memory(dict_filename, number, dict_text);
		ft_putstr("Error\n");
		return (1);
	}
	number_of_pairs = count_lines(dict_text);
	dictionary = parse_and_validate(dict_text, number_of_pairs);
	if (dict_is_valid(dictionary, number_of_pairs))
		say_number(number, dictionary, number_of_pairs);
	free_dictionary(dictionary, number_of_pairs);
	free_memory(dict_filename, number, dict_text);
	return (0);
}
