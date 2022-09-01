/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:38:31 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/01 16:05:10 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_prefix(char *pointer)
{
	int	i;

	i = ft_conv_string(pointer);
	return (i);
}

int	ft_conv_pointer(void *str)
{
	int				i;
	char			*s;
	unsigned long	address;

	address = (unsigned long)str;
	i = ft_prefix("0x");
	s = ft_itoa_base(address, HEXADECIMAL_LOWERCASE);
	i += ft_conv_string(s);
	free(s);
	return (i);
}
