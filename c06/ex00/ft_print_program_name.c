/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:42:46 by troudot           #+#    #+#             */
/*   Updated: 2022/09/18 10:09:57 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[0][i])
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
