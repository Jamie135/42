/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:05:07 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 15:17:02 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	c;

	if (a == 0 || b == 0)
		return (0);
	if (a <= b)
		c = b;
	else
		c = a;
	while (1)
	{
		if (c % a == 0 && c % b == 0)
			return (c);
		c++;
	}
}