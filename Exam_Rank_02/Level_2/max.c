/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:40:17 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 15:44:50 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	maximum;

	i = 0;
	maximum = tab[i];
	while (i < len)
	{
		if (maximum < tab[i])
			maximum = tab[i];
		i++;
	}
	return (maximum);
}