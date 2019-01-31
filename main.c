/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflores- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:51:39 by cflores-          #+#    #+#             */
/*   Updated: 2019/01/28 22:52:01 by cflores-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdlib.h>

int main()
{
	int i = 42;
	int a = -42;
	char* hello = "Hello World";
	char* world = "Silicon Valley";
	double j = 42.42;

	ft_printf("%d\n", i);
	ft_printf("%s\n", hello);
	ft_printf("%p\n", hello);
	ft_printf("%d\n", j);
	ft_printf("%%\n");
	ft_printf("%d\n", a);
	ft_printf("I study at %i %s,\nyou can learn from %s to the most sophisticated piece of code.\n%p: is the address of hello.", i, world, hello, hello);
	

	return (0);
}

