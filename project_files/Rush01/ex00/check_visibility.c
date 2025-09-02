/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnilov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 22:10:35 by dnilov            #+#    #+#             */
/*   Updated: 2025/08/31 21:48:03 by dnilov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define N 4
//These functions below are counting visible boxes and cheking, 
//if current grid is really matches the points of view(input)
//From top to bottom

int	check_visible_col_t_b(int **grid, int col, int *colXtop)
{
	int	i;
	int	max;
	int	counter;

	i = 0;
	max = 0;
	counter = 0;
	while (i < N)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			counter++;
		}
		i++;
	}
	if (counter != *colXtop)
		return (0);
	return (1);
}
//From bottom to top

int	check_visible_col_b_t(int **grid, int col, int *colXbottom)
{
	int	i;
	int	max;
	int	counter;

	i = N - 1;
	max = 0;
	counter = 0;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			counter++;
		}
		i--;
	}
	if (counter != *colXbottom)
		return (0);
	return (1);
}
//From left to right

int	check_visible_row_l_r(int **grid, int row, int *rowXleft)
{
	int	i;
	int	max;
	int	counter;

	i = 0;
	max = 0;
	counter = 0;
	while (i < N)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			counter++;
		}
		i++;
	}
	if (counter != *rowXleft)
		return (0);
	return (1);
}
//From right to left

int	check_visible_row_r_l(int **grid, int row, int *rowXright)
{
	int	i;
	int	max;
	int	counter;

	i = N - 1;
	max = 0;
	counter = 0;
	while (i >= 0)
	{
		if (grid[row][i] > max)
		{
			max = grid[row][i];
			counter++;
		}
		i--;
	}
	if (counter != *rowXright)
		return (0);
	return (1);
}
