/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:12:57 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/19 16:41:29 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 89) ||
				(argv[1][i] >= 97 && argv[1][i] <= 121))
				argv[1][i] = argv[1][i] + 1;
			else if (argv[1][i] == 90 || argv[1][i] == 122)
				argv[1][i] = argv[1][i] - 25;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
