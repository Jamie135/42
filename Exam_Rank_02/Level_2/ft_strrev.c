/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:29:27 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 14:36:12 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	cpy;

	i = 0;
	len = 0;
	cpy = str[i];
	while (str[len])
		len++;
	while (i < len)
	{
		str[i] = str[len];
		str[len] = cpy;
		i++;
		len--;
	}
	return (str);
}
