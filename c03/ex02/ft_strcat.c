/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troudot <troudot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 07:43:17 by troudot           #+#    #+#             */
/*   Updated: 2022/09/15 07:44:16 by troudot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[i] != '\0')
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
// 	char src[] = " Hehe";
// 	char dest[] = "Ca marche";
// 	printf("%s", ft_strcat(dest, src));
// }
