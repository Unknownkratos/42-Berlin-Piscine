/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utility.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:57:20 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/20 23:35:43 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "file_utility.h"

int	count_characters(char *filename)
{
	FILE		*f;
	int			count;
	char		buffer[1];

	f = fopen(filename, "r");
	if (f == NULL)
		return (0);
	count = 0;
	while (fread(buffer, sizeof(buffer), 1, f))
		count++;
	fclose(f);
	return (count);
}

char	*get_filetext(char *filename)
{
	int				character_count;
	FILE			*f;
	char			*buffer;

	character_count = count_characters(filename);
	if (character_count == 0)
		return (NULL);
	f = fopen(filename, "r");
	buffer = malloc((character_count + 1) * sizeof(char));
	fread(buffer, sizeof(char), character_count, f);
	buffer[character_count - 1] = '\0';
	fclose(f);
	return (buffer);
}
