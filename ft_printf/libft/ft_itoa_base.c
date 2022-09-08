/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:01:38 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/08 12:14:03 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(unsigned long long n, char *base)
{
	size_t				num_len;
	unsigned long long	base_len;

	num_len = 1;
	base_len = ft_strlen(base);
	while (n >= base_len)
	{
		n /= base_len;
		num_len++;
	}
	return (num_len);
}

char	*ft_itoa_base(unsigned long long n, char *base)
{
	int		num_len;
	int		base_len;
	char	*str;

	num_len = ft_len(n, base);
	base_len = ft_strlen(base);
	str = ft_calloc((num_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (num_len)
	{
		num_len = num_len - 1;
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
