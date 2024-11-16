/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_util.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsemenov <tsemenov@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:56:13 by tsemenov          #+#    #+#             */
/*   Updated: 2024/10/20 19:56:56 by tsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_UTIL_H
# define DICT_UTIL_H

# include "dictionary.h"

int				count_lines(char *text);
int				initialise_key(char *text, struct s_pair *dictionary, int i);
int				initialise_value(char *text, struct s_pair *dictionary, int i);
struct s_pair	*parse_and_validate(char *text, int number_of_pairs);

#endif
