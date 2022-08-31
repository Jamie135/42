/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hexa_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:05:16 by pbureera          #+#    #+#             */
/*   Updated: 2022/08/31 14:07:45 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_conv_hexa_upper(unsigned long hexa_u)
{
	int		i;
	char	*str;

	str = ft_itoa_base(hexa_u, HEXADECIMAL_UPPERCASE);
	i = ft_conv_string(str);
	free(str);
	return (i);
}
