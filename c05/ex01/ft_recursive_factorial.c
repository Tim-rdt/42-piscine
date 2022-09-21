/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:53:15 by troudot           #+#    #+#             */
/*   Updated: 2022/09/20 03:49:46 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	unsigned int	nbr;

	nbr = nb;
	if (nb <= 0)
		return (0);
	if (nb > 1)
		nbr *= ft_recursive_factorial(nb - 1);
	return (nbr);
}
