/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:37:35 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 14:53:53 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
		{
			break;
		}
		i++;
	}
	return (i);
}

int	main()
{
	size_t	a;
	size_t	b;

	a = strspn("abcd", "qwertya");
	b = ft_strspn("abcd", "qwertya");
	printf("strspn: %ld\nft_strspn: %ld\n", a, b);
}
