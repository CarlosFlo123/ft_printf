/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 20:24:28 by cflores-          #+#    #+#             */
/*   Updated: 2019/01/28 20:25:01 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "helpers.h"

inline extern int			pf_is_conversion(const char c)
{
	return (pf_strchr("dDioOuUxXeEfFgGaAcCsSpn%", c) != NULL);
}

inline extern int			pf_is_modifier(const char c)
{
	return (pf_strchr("hljz", c) != NULL);
}

inline extern int			pf_is_flag(const char c)
{
	return (pf_strchr("#0-+' ", c) != NULL);
}

inline extern int			pf_is_precision(const char c)
{
	return (pf_strchr("$*.", c) != NULL);
}

inline int					pf_is_valid(const char c)
{
	return (pf_is_conversion(c) || pf_is_modifier(c) || pf_is_flag(c) ||
			pf_isdigit(c) || pf_is_precision(c));
}
