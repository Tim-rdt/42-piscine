/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 01:43:10 by troudot           #+#    #+#             */
/*   Updated: 2022/09/21 10:42:19 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	value;
	int	sign;

	value = 0;
	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		value *= 10;
		value += *str - '0';
		str++;
	}
	value *= sign;
	return (value);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("   ---+--+01a234a506789ab567"));
}
*/
