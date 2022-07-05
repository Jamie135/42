/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:18:29 by pbureera          #+#    #+#             */
/*   Updated: 2022/06/13 13:20:07 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;

	i = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (a1[i] == a2[i] && a1[i] != '\0' && a2[i] != '\0' && i < n - 1)
		i++;
	return (a1[i] - a2[i]);
}
