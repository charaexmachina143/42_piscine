/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:37:28 by doberste          #+#    #+#             */
/*   Updated: 2025/09/09 16:35:00 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = malloc(size * sizeof(int));
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}

// int main()
// {
//     int min = 4;
//     int max = 7;
//     long long ic = max - min;
//     int *range = ft_range(min, max);
//     int i = 0;

//     while(i < ic)
//     {
//         printf("%i", range[i]);
//         i++;
//     }

// }