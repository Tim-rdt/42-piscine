/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:37:53 by troudot           #+#    #+#             */
/*   Updated: 2022/09/21 06:10:17 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	nbr = nb;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (--nb > 0)
		nbr *= nb;
	return (nbr);
}


// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(6));
// }
