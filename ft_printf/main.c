/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:06:51 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/08 16:59:48 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	int i;
	
	i = printf("\tprintf:\n");
	printf("%d\n", i);
	i = printf("char: %c\nstring: %s\npointer: %p\npointer null: %p\n", 'c', "Hello", "42", (void *)0);
	printf("%d\n", i);
	i = printf("decimal: %d\ninteger: %i\nunsigned: %u\n", -42, -42, 42);
	printf("%d\n", i);
	i = printf("hexa low: %x\nhexa up: %X\npercent: %%\n", 42, 42);
	printf("%d\n", i);
	i = ft_printf("\tft_printf:\n");
	ft_printf("%d\n", i);
	i = ft_printf("char: %c\nstring: %s\npointer: %p\npointer null: %p\n", 'c', "Hello", "42", (void *)0);
	ft_printf("%d\n", i);
	i = ft_printf("decimal: %d\ninteger: %i\nunsigned: %u\n", -42, -42, 42);
	ft_printf("%d\n", i);
	i = ft_printf("hexa low: %x\nhexa up: %X\npercent: %%\n", 42, 42);
	ft_printf("%d\n", i);
	return (0);
}
