/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 21:11:45 by cflores-          #+#    #+#             */
/*   Updated: 2019/01/28 21:15:40 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_max(int a, int b)
{
	return (a > b ? a : b);
}

int	pf_get_base(char c)
{
	if (c == 'X' || c == 'x' || c == 'p')
		return (16);
	else if (c == 'o')
		return (8);
	else
		return (10);
}
