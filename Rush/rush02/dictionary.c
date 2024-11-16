/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:56:43 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/20 23:28:42 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "utility.h"
#include "file_utility.h"
#include "dict_util.h"
#include "dictionary.h"

void	free_pair(struct s_pair *pair)
{
	free((*pair).key);
	free((*pair).value);
}

void	free_dictionary(struct s_pair *dictionary, unsigned int pairs_n)
{
	unsigned int	i;

	i = 0;
	while (i < pairs_n)
	{
		free_pair(&dictionary[i]);
		i++;
	}
	free(dictionary);
}

char	*find(char *key, struct s_pair *dictionary, unsigned int pairs_n)
{
	unsigned int	i;

	i = 0;
	while (i < pairs_n)
	{
		if (!ft_strcmp(dictionary[i].key, key))
			return (dictionary[i].value);
		i++;
	}
	return (NULL);
}
