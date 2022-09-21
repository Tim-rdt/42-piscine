/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 03:37:53 by troudot           #+#    #+#             */
/*   Updated: 2022/09/20 20:19:11 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	nbr;

	nbr = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
		nbr *= --nb;
	return (nbr);
}
