/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 20:47:57 by cflores-          #+#    #+#             */
/*   Updated: 2019/01/31 10:17:32 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	pf_write(const char *str, const size_t len)
{
	write(1, str, len);
	return (len);
}

int	pf_repeat(const char c, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		pf_write(&c, 1);
		i++;
	}
	return (i);
}
