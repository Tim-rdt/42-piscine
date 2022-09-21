/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:08:39 by troudot           #+#    #+#             */
/*   Updated: 2022/09/16 00:09:44 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	n = 1;
	i = 0;
	while (n < argc)
	{
		while (argv[n][i])
		{
			write (1, &argv[n][i], 1);
			i++;
		}
		write (1, "\n", 1);
		n++;
		i = 0;
	}
	return (0);
}
