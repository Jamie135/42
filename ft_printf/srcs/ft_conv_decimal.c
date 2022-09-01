/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_decimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:34:56 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/01 11:46:10 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_negative(int *d)
{
	int	i;

	i = 0;
	if (*d == INT_MIN)
	{
		i = 1;
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		*d = 147483648;
		i++;
	}
	else if (*d < 0)
	{
		ft_putchar_fd('-', 1);
		*d *= -1;
		i++;
	}
	return (i);
}

int	ft_conv_decimal(int d)
{
	int		i;
	char	*str;

	i = ft_negative(&d);
	str = ft_itoa_base(d, DECIMAL);
	i += ft_conv_string(str);
	free(str);
	return (i);
}
