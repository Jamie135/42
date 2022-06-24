/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:28:09 by pbureera          #+#    #+#             */
/*   Updated: 2022/06/13 14:51:34 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*find)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == find[0])
		{
			j = 1;
			while (find[j] != '\0' && str[i + j] == find[j] && (i + j) < len)
				j++;
			if (find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
