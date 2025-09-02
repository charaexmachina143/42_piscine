/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution_validation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnilov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 21:26:18 by dnilov            #+#    #+#             */
/*   Updated: 2025/08/31 21:46:56 by dnilov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include <stdlib.h>
#define N 4

int	check_visible_col_t_b(int **grid, int col, int *colXtop);
int	check_visible_col_b_t(int **grid, int col, int *colXbottom);
int	check_visible_row_l_r(int **grid, int row, int *rowXleft);
int	check_visible_row_r_l(int **grid, int row, int *rowXright);
int	is_valid(int **grid, int val, int *rc, int *rules);
//Functions below cheking, if row or column is already filled with some values

int	is_full_col(int **grid, int col)
{
	int	is_col_full;
	int	i;

	is_col_full = 1;
	i = 0;
	while (i < N)
	{
		if (grid[i][col] == 0)
			is_col_full = 0;
		i++;
	}
	return (is_col_full);
}

int	is_full_row(int **grid, int row)
{
	int	is_row_full;
	int	i;

	is_row_full = 1;
	i = 0;
	while (i < N)
	{
		if (grid[row][i] == 0)
			is_row_full = 0;
		i++;
	}
	return (is_row_full);
}
//This function returns true and sets grid cell to 0, 
//if checking by visibility was failed

int	is_not_valid_case(int **grid, int row, int col, int *rules)
{
	if (is_full_col(grid, col)
		&& (!check_visible_col_t_b(grid, col, &rules[col])
			|| !check_visible_col_b_t(grid, col, &rules[col + 4])))
	{
		grid[row][col] = 0;
		return (1);
	}
	if (is_full_row(grid, row)
		&& (!check_visible_row_l_r(grid, row, &rules[row + 8])
			|| !check_visible_row_r_l(grid, row, &rules[row + 12])))
	{
		grid[row][col] = 0;
		return (1);
	}
	return (0);
}
//This function returns True,
//if value val fits in the grid by coordinates [rc[0], rc[1]]

int	is_valid(int **grid, int val, int *rc, int *rules)
{
	int	i;
	int	row;
	int	col;

	row = rc[0];
	col = rc[1];
	i = 0;
	while (i < N)
	{
		if (grid[row][i] == val || grid[i][col] == val)
			return (0);
		i++;
	}
	grid[row][col] = val;
	if (is_not_valid_case(grid, row, col, rules))
	{
		return (0);
	}
	return (1);
}

//Function that solves this puzzle. 
//Iterates through all positions in grid recursively. 
//Also applies and validates the clues(*rules)

int	solve(int **grid, int pos, int *rules)
{
	int	row;
	int	col;
	int	i;
	int	rc[2];

	row = pos / N;
	col = pos % N;
	rc[0] = row;
	rc[1] = col;
	if (pos == N * N)
		return (1);
	i = 1;
	while (i <= N)
	{
		if (is_valid(grid, i, rc, rules))
		{
			if (solve(grid, pos + 1, rules))
				return (1);
			grid[row][col] = 0;
		}
		i++;
	}
	return (0);
}
