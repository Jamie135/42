/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hexa_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:00:15 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/01 13:11:34 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_conv_hexa_lower(unsigned int hexa_l)
{
	int		i;
	char	*str;

	str = ft_itoa_base(hexa_l, HEXADECIMAL_LOWERCASE);
	i = ft_conv_string(str);
	free(str);
	return (i);
}
