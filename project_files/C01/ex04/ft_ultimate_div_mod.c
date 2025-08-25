/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 16:25:50 by doberste          #+#    #+#             */
/*   Updated: 2025/08/23 16:25:52 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;
	int	temp_div;
	int	temp_mod;

	temp_a = *a;
	temp_b = *b;
	temp_div = temp_a / temp_b;
	temp_mod = temp_a % temp_b;
	*a = temp_div;
	*b = temp_mod;
}

// int	main(void)
// {
// 	int var1 = 42;
// 	int var2 = 5;
// 	int *a = &var1;
// 	int *b = &var2;
// 	ft_ultimate_div_mod(a, b);
// 	printf("%i", var1);
// 	printf("%i", var2);
//}
