/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:30:57 by doberste          #+#    #+#             */
/*   Updated: 2025/09/06 18:07:50 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	n;
	int	temp;


	if (nb == 1)
		return (nb);
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

// int	main(void)
// {
// 	printf("%i", ft_recursive_factorial(5));
// }