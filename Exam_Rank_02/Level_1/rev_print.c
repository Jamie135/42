/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:49:38 by pbureera          #+#    #+#             */
/*   Updated: 2022/09/19 16:40:31 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	len = 0;
	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		while (len >= 0)
		{
			write(1, &argv[1][len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
