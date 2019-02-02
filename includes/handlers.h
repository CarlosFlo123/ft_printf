/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:44:31 by cflores-          #+#    #+#             */
/*   Updated: 2019/02/01 19:20:42 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H
# include "ft_printf.h"

int			handle_access(t_pf_param *param, const char *str, size_t *i);
int			handle_flags(t_pf_param *param, const char *str, size_t *i);
int			handle_width(t_pf_param *param, const char *str, size_t *i);
int			handle_precision(t_pf_param *p, const char *str, size_t *i);
int			handle_modifier(t_pf_param *p, const char *str, size_t *i);
int			handle_conversion(t_pf_param *p, const char *str, size_t *i);
t_pf_param	get_param(const char *str, size_t len);

#endif
