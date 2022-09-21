/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_recursive_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 01:59:07 by troudot           #+#    #+#             */
/*   Updated: 2022/09/19 11:38:23 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	unsigned int	result;

	if (power < 0)
		return (0);
	if (nb && power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, --power));
}
