/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:20:19 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 15:30:30 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	unsigned int	n;
	char	digit;

	if (nbr < 0)
	{
		write (1, "-", 1);
		n = (unsigned int)nbr * -1;
	}
	else
		n = nbr;
	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + 48;
	write (1, &digit, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	write (1, "\n", 1);
	return (0);
}