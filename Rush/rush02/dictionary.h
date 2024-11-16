/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsemenov <tsemenov@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:26:47 by tsemenov          #+#    #+#             */
/*   Updated: 2024/10/20 21:40:53 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H

struct s_pair
{
	char	*key;
	char	*value;
};

void	free_pair(struct s_pair *pair);
void	free_dictionary(struct s_pair *dictionary, unsigned int pairs_n);
char	*find(char *key, struct s_pair *dictionary, unsigned int pairs_n);

#endif
