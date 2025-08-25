/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:17:59 by doberste          #+#    #+#             */
/*   Updated: 2025/08/23 15:18:02 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
//     int c = 0;
//     int d = 0;
//     int *div = &c;
//     int *mod = &d;
//     ft_div_mod(32 , 5, &c ,&d);
//     printf("%i", *div);
//     printf("%i", *mod);
// }