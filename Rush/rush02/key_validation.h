/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_validation.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsemenov <tsemenov@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:59:14 by tsemenov          #+#    #+#             */
/*   Updated: 2024/10/20 22:59:17 by tsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEY_VALIDATION_H
# define KEY_VALIDATION_H

int	ttp_keys_valid(struct s_pair *dictionary, unsigned int pairs_n);
int	keys_are_valid(struct s_pair *dictionary, unsigned int pairs_n);

#endif
