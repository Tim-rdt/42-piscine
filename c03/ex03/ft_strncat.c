/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:39:13 by troudot           #+#    #+#             */
/*   Updated: 2022/09/16 01:05:26 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[i] != '\0' && a < nb)
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

// int	main()
// {
// 	char src[] = "CaMarche";
// 	char dest[] = "Hehe ";
// 	printf("%s", ft_strncat(dest, src, 13));
// }
