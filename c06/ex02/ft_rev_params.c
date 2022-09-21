/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 00:19:26 by troudot           #+#    #+#             */
/*   Updated: 2022/09/16 00:25:58 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	n = argc - 1;
	i = 0;
	while (n > 0)
	{
		while (argv[n][i])
		{
			write (1, &argv[n][i], 1);
			i++;
		}
		write (1, "\n", 1);
		n--;
		i = 0;
	}
	return (0);
}
