/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:38:02 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 14:27:39 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)s1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main()
{
	char	*a;
	char	*b;

	a = strpbrk("abcd", "salut");
	b = ft_strpbrk("abcd", "salut");
	printf("strpbrk: %s\nft_strpbrk: %s\n", a, b);
}
