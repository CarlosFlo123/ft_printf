/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:49:31 by cflores-          #+#    #+#             */
/*   Updated: 2019/01/28 22:50:58 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

int				pf_atoi(const char *str, int allow_neg, int *result, size_t *i);
char			*pf_itoa(intmax_t n, t_pf_param param, char sign);
char			*pf_uitoa(uintmax_t n, unsigned int base, const char *digits,
					size_t precision);
void			*pf_memalloc(size_t size);
char			*pf_strchr(const char *s, int c);
size_t			pf_strlen(const char *s, const size_t max);
int				pf_isdigit(int c);
char			*pf_strjoin(char *a, char *b);
int				pf_max(int a, int b);
int				pf_get_base(char c);

#endif
