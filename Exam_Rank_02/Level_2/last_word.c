/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:21:08 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/20 15:37:43 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126)
				j = i + 1;
			i++;
		}
		while (argv[1][j] >= 33 && argv[1][j] <= 127)
		{
			write (1, &argv[j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}