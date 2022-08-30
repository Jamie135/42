/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:14:52 by pbureera          #+#    #+#             */
/*   Updated: 2022/08/30 16:29:39 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_check(int c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int	ft_convert(int c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_conv_char(va_arg(args, int));
	else if (c == 's')
		i = ft_conv_string(va_arg(args, char *));
	else if (c == 'p')
		i = ft_conv_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		i = ft_conv_integer(va_arg(args, int));
	else if (c == 'u')
		i = ft_conv_unsigned(va_arg(args, unsigned long));
	else if (c == 'x')
		i = ft_conv_hexa_lower(va_arg(args, unsigned long));
	else if (c == 'X')
		i = ft_conv_hexa_upper(va_arg(args, unsigned long));
	else if (c == '%')
		i = ft_conv_percent(c);
}
