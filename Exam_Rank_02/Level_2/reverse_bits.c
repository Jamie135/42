/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:53:18 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 15:58:05 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	reverse;

	i = 9;
	reverse = 0;
	while (i--)
	{
		reverse = reverse * 2 + (octet % 2);
		octet = octet / 2;
	}
	return (reverse);
}