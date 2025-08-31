/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:12:37 by doberste          #+#    #+#             */
/*   Updated: 2025/08/27 15:12:41 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				c;

	i = 0;
	c = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			c = s1[i] - s2[i];
			return (c);
		}
		i++;
	}
	return (c);
}

// int	main(void)
// {
// 	char s1[] = "Braa";
// 	char s2[] = "Baba";

// 	printf("%i", ft_strncmp(s1, s2, 3));
// }