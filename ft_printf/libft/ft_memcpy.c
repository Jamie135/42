/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:30:44 by pbureera          #+#    #+#             */
/*   Updated: 2022/06/13 12:30:31 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*str1;
	unsigned const char	*str2;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		*((char *)str1 + i) = *((char *)str2 + i);
		i++;
	}
	return (str1);
}
