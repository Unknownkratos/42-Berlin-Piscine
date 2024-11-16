/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_init.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsemenov <tsemenov@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:10:15 by tsemenov          #+#    #+#             */
/*   Updated: 2024/10/20 19:10:24 by tsemenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENT_INIT_H
# define ARGUMENT_INIT_H

int		get_number_length(char *str);
char	*get_validated_number(char *number);
char	*get_dictionary_filename(int argc, char *argv[]);

#endif
