/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 14:12:04 by dnilov            #+#    #+#             */
/*   Updated: 2025/09/02 10:40:02 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#define N 4

int		**create_matrix(int n);
int		ft_error(void);
void	print_matrix(int **mx, int n);
int		solve(int **grid, int pos, int *rules);
int		ft_strlen(char *s);
int		ft_is_digit(char c);
int		ft_error(void);
int		is_valid_input(char *arg);
int		*string_to_int_array(char *str);
void	free_matrix(int **matrix);

int	main(int ac, char **av)
{
	int	*arr;
	int	**grid;

	if (ac != 2 || !is_valid_input(av[1]))
	{
		ft_error();
		return (1);
	}
	grid = create_matrix(N);
	arr = string_to_int_array(av[1]);
	if (solve(grid, 0, arr) == 0)
	{
		ft_error();
		return (1);
	}
	else
	{
		print_matrix(grid, N);
	}
	free(arr);
	free_matrix(grid);
	return (0);
}
