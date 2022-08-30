/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:47:32 by pbureera          #+#    #+#             */
/*   Updated: 2022/06/13 12:51:19 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((char *)src);
	if (size == 0)
		return (len);
	if (!dst || !src)
		return (0);
	while (src[i] && i < size - 1)
	{
		dst[i] = ((char *)src)[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
