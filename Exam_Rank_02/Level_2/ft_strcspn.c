/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:00:46 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 14:39:29 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i])
		i++;
	return (i);	
}

int	main()
{
	size_t	a;
	size_t	b;

	a = strcspn("abcd", "0987654321d");
	b = ft_strcspn("abcd", "0987654321d");
	printf("strcspn: %ld\nft_strcspn: %ld\n", a, b);
}
