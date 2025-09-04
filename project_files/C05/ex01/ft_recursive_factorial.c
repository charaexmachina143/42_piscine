/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:30:57 by doberste          #+#    #+#             */
/*   Updated: 2025/09/02 12:56:06 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	n;
	int	temp;

	n = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (n == 1)
		n = nb - 1;
	temp = nb;
	while (n > 1)
	{
		temp = temp * n;
		n--;
	}
	if (n > 1)
		ft_recursive_factorial(nb);
	return (temp);
}

// int	main(void)
// {
// 	printf("%i", ft_recursive_factorial(5));
// }