/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:09:25 by doberste          #+#    #+#             */
/*   Updated: 2025/08/31 14:06:13 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	o;

	i = 0;
	o = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[o] != '\0' && o < n)
	{
		dest[i + o] = src[o];
		++o;
	}
	dest[i + o] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char scr[] = "raaaaaaaaaaaaa";
// 	char dest[100] = "Cha";

// 	printf("%s", ft_strncat(dest, scr, 2));
// }