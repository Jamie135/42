/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:47:31 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 16:11:17 by pbureera         ###   ########.fr       */
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
	while (str[i] >= 9 || str[i] <= 13)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}

void	hexa(int n)
{
	char	hex[] = "0123456789abcdef";

	if (n >= 16)
		hexa(n / 16);
	write (1, &hex[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		hex(ft_atoi(argv[1]));
	write (1, "\n", 1);
}
