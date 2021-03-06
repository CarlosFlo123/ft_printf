/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:25:58 by cflores-          #+#    #+#             */
/*   Updated: 2019/01/31 10:20:47 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			pf_handle_percent(t_pf_param param, va_list list)
{
	int		count;
	char	p;

	(void)list;
	p = (param.flags & PF_FLAG_ZERO ? '0' : ' ');
	count = 0;
	if ((param.flags & PF_FLAG_MINUS) == 0 && param.width > 1)
		count += pf_repeat(p, param.width - 1);
	count += pf_write("%", 1);
	if ((param.flags & PF_FLAG_MINUS) != 0 && param.width > 1)
		count += pf_repeat(' ', param.width - 1);
	return (count);
}
