/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:24:09 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 13:36:33 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (src);
}

int	main()
{
	char	*a;
	char	*b;

	a = strdup("helloooo    bauss");
	b = ft_strdup("helloooo    bauss");
	printf("strdup: %s\nft_strdup: %s\n", a, b);
}
