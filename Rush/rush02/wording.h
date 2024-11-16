/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wording.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsemenov <tsemenov@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:24:50 by tsemenov          #+#    #+#             */
/*   Updated: 2024/10/20 21:37:00 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORDING_H
# define WORDING_H

# include "dictionary.h"

char	*get_ten_to_power(int power);
char	*get_edited_number(char *number);
void	say2digits(char three_ds[4], struct s_pair *dict, unsigned int pairs_n);
void	say3digits(char three_ds[4], struct s_pair *dict, unsigned int pairs_n);
void	say_number(char *number, struct s_pair *dict, unsigned int pairs_n);

#endif
