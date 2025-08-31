/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:47:05 by doberste          #+#    #+#             */
/*   Updated: 2025/08/27 14:47:11 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (s1[i] != s2[i])
	{
		c = s1[i] - s2[i];
		return (c);
		i++;
	}
	return (c);
}

// int	main(void)
// {
// 	char s1[] = "Chara";
// 	char s2[] = "ChaRa";

// 	printf("%i", ft_strcmp(s1, s2));
// }