/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 04:16:13 by troudot           #+#    #+#             */
/*   Updated: 2022/09/19 07:55:43 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	nbr;
	long	result;

	nbr = nb;
	result = 2;
	if (nbr <= 0)
		return (0);
	if (nbr == 1)
		return (1);
	if (nbr >= 2)
	{
		while (result * result <= nbr)
		{
			if (result * result == nbr)
			{
				return (result);
			}
			result++;
		}
	}
	return (0);
}
