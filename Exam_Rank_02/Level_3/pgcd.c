/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:32:11 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/21 15:44:56 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	if (argc == 3)
	{
		if (n1 > 0 && n2 > 0)
		{
			while (n1 != n2)
			{
				if (n1 > n2)
					n1 -= n2;
				else
					n2 -= n1;
			}
			printf("%d", n1);
		}
	}
	printf("\n");
	return (0);
}
