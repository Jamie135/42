/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:14:33 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 13:21:36 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				space = 1;
			if (!(argv[1][i] == ' ' | argv[1][i] == '\t'))
			{
				if (space)
					write (1, "   ", 3);
				space = 0;
				write (1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}