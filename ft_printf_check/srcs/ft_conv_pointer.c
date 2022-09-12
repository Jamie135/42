/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:38:31 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/08 12:37:25 by pbureera         ###   ########.fr       */
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
	if (!str)
	{
		write (1, "(nil)", 5);
		return (5);
	}	
	i = ft_prefix("0x");
	s = ft_itoa_base(address, HEXADECIMAL_LOWERCASE);
	i += ft_conv_string(s);
	free(s);
	return (i);
}
