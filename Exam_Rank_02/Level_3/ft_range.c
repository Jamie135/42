/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:27:05 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 14:35:03 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*str;
	int	len;

	if (start <= end)
		len = end - start;
	else
		len = start - end;
	str = malloc(sizeof(int) * (len + 1));
	if (!str)
		return (NULL);
	while (len >= 0)
	{
		str[len] = end;
		if (start <= end)
			end--;
		else
			end++;
		len--;
	}
	return (str);
}
