/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:23:11 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 16:34:07 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	captitalizer(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write (1, &str[i], 1);
	while (str[i++])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if ((str[i - 1] == ' ' || str[i - 1] == '\t')
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		write (1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while (i < argc)
		{
			captitalizer(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	return (0);
}
