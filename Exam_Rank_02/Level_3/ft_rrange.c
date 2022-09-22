/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:35:45 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 14:46:12 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*str;
	int	len;
	int i;

	if (start <= end)
		len = end - start;
	else
		len = start - end;
	str = malloc(sizeof(int) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		str[i] = end;
		if (start <= end)
			end--;
		else
			end++;
		i++;
	}
	return (str);
}
