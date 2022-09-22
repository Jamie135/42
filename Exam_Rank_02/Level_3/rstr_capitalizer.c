/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:00:41 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 16:22:25 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	captitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i + 1] == '\0' || str[i + 1] == ' ' || str[i + 1] == '\t')
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		write (1, &str[i], 1);
		i++;
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
