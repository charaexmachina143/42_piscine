/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnilov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 15:02:53 by dnilov            #+#    #+#             */
/*   Updated: 2025/08/31 20:51:25 by dnilov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"
#define N 4

int	**create_matrix(int n)
{
	int	**matrix;
	int	i;
	int	j;

	matrix = malloc(sizeof(int *) * n);
	i = 0;
	while (i < n)
	{
		matrix[i] = malloc(4 * n);
		j = 0;
		while (j < n)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	return (matrix);
}

void	print_matrix(int **mx, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			printf("%d ", mx[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	free_matrix(int **matrix)
{
	int	i;

	i = 0;
	while (i < N)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
