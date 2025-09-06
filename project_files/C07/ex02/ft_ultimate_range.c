/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:37:28 by doberste          #+#    #+#             */
/*   Updated: 2025/09/06 15:51:46 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max);

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	o;
	int	i;


	int result = malloc(max - min);
	o = min;
	i = 0;
	while (o < max)
	{
		result[i] = o;
		i++;
		o++;
	}
	if (min > max || (max == 0 && min == 0))
	{
		return (-1);
	}
	return (range);
}