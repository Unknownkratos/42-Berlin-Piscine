/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:42:39 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/20 21:48:30 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_H
# define UTILITY_H

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_chtostr(char c, char *str);
int				ft_isspace(char c);
int				ft_isnumeric(char c);
int				ft_isprintable(char c);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
char			*ft_strcpy(char *dest, char *src);

#endif
