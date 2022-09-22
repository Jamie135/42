/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:59:29 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/19 17:07:47 by pbureera         ###   ########.fr       */
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
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
				argv[1][i] = 122 - argv[1][i] + 97;
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
				argv[1][i] = 90 - argv[1][i] + 65;
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
