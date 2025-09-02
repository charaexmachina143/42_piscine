/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:16:00 by doberste          #+#    #+#             */
/*   Updated: 2025/08/31 14:06:14 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	o;

	i = 0;
	o = 0;
	while (dest[i])
		i++;
	if (dest[i] == '\0')
	{
		while (src[o] != '\0')
		{
			dest[i + o] = src[o];
			o++;
		}
		dest[i + o] = '\0';
	}
	return (dest);
}

// int	main(void)
// {
// 	char	scr[] = "raaaaaaaaaaaaa";
// 	char	dest[100] = "Cha";

// 	printf("%s", ft_strcat(dest, scr));
// }
