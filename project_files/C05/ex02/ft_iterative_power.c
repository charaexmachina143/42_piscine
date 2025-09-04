/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:18:10 by doberste          #+#    #+#             */
/*   Updated: 2025/09/02 12:56:09 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	tmp_power;
	int	tmp_nb;

	tmp_nb = nb;
	tmp_power = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (tmp_power != 1)
	{
		tmp_nb = tmp_nb * nb;
		tmp_power--;
	}
	return (tmp_nb);
}

// int	main(void)
// {
// 	printf("%i", ft_iterative_power(3, 0));
// }