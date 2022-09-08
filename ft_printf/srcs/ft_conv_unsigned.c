/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:49:33 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/01 13:26:45 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_conv_unsigned(unsigned int u)
{
	int		i;
	char	*str;

	str = ft_itoa_base(u, DECIMAL);
	i = ft_conv_string(str);
	free(str);
	return (i);
}
