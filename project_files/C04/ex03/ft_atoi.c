/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 13:54:38 by doberste          #+#    #+#             */
/*   Updated: 2025/08/31 14:33:59 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	is_neg;

	is_neg = 0;
	i = 0;
	result = 0;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			is_neg++;
		if (str[i] != ' ' && str[i] != '-' && str[i] != '+')
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (is_neg % 2 == 1)
	{
		result = -result;
	}
	return (result);
}

// int	main(void)
// {
// 	int	a;

// 	a = ft_atoi("abc123");
// 	printf("%i", a);
// }
