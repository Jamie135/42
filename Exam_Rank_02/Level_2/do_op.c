/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:19:06 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/19 17:31:32 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d\n", (atoi(argv[1]) + atoi(argv[3])));
		else if (argv[2][0] == '-')
			printf("%d\n", (atoi(argv[1]) - atoi(argv[3])));
		else if (argv[2][0] == '*')
			printf("%d\n", (atoi(argv[1]) * atoi(argv[3])));
		else if (argv[2][0] == '/')
			printf("%d\n", (atoi(argv[1]) / atoi(argv[3])));
		else if (argv[2][0] == '%')
			printf("%d\n", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}
