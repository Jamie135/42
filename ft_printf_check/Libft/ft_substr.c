/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:21:29 by pbureera          #+#    #+#             */
/*   Updated: 2022/06/13 16:32:49 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	size_t			sub_len;
	unsigned int	i;

	if (!s)
		return (NULL);
	sub_len = ft_strlen(s);
	if ((size_t)start > sub_len)
		return (ft_strdup(""));
	if (start + len > sub_len)
		len = sub_len - start;
	sub_str = malloc(sizeof(char) * (len + 1));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while ((char)s[start] && (size_t)i < len)
	{
		sub_str[i] = (char)s[start];
		i++;
		start++;
	}
	sub_str[i] = 0;
	return (sub_str);
}
