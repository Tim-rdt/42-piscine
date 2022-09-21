/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:02:40 by troudot           #+#    #+#             */
/*   Updated: 2022/09/20 03:59:03 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
	i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (++nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_find_next_prime(7));
// }