/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:18:28 by doberste          #+#    #+#             */
/*   Updated: 2025/09/06 14:33:00 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*range;
	int	o;
	int	i;

	range = malloc(max - min);
	o = min;
	i = 0;
	while (o < max)
	{
		range[i] = o;
		i++;
		o++;
	}
	if (min > max || (max == 0 && min == 0))
	{
		return (NULL);
	}
	return (range);
}

// int main()
// {
//     int min = -2147483647;
//     int max = 2147483647;
//     long long ic = max - min;
//     int *range = ft_range(min, max);
//     int i = 0;

//     while(i < ic)
//     {
//         printf("%i", range[i]);
//         i++;
//     }

// }