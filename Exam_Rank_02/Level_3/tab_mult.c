/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:37:00 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 16:57:36 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 0;
		i++;
	}
	return (result * sign);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	n;
	
	if (nbr < 0)
	{
		n = (unsigned int)nbr * -1;
		ft_putchar('-');
	}
	else
		n = nbr;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((char)n % 10 + 48);
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		i = 0;
		n = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(n);
			write (1, " = ", 3);
			ft_putnbr(i * n);
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
}
