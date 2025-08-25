/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 09:24:17 by fsitter           #+#    #+#             */
/*   Updated: 2025/08/23 12:36:22 by jtinemba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function prototypes
void	ft_putchar(char c);
void	rush(int x, int y);

void	firstline(int *x, int *y)
{
	ft_putchar('A');
	*x -= 1;
	*y -= 1;
	while (*x > 1)
	{
		ft_putchar('B');
		*x -= 1;
	}
	if (*x > 0)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middleline(int *x, int *y, int z)
{
	*x = z;
	ft_putchar('B');
	*x -= 1;
	*y -= 1;
	while (*x > 1)
	{
		ft_putchar(' ');
		*x -= 1;
	}
	if (*x > 0)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	lastline(int *x, int *y, int a)
{
	*x = a;
	ft_putchar('C');
	*x -= 1;
	*y -= 1;
	while (*x > 1)
	{
		ft_putchar('B');
		*x -= 1;
	}
	if (*x > 0)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

// rush function
void	rush(int x, int y)
{
	int	counter_x;
	int	counter_y;
	int	*cpx;
	int	*cpy;

	counter_x = x;
	counter_y = y;
	cpx = &counter_x;
	cpy = &counter_y;
	if (x == *cpx && y == *cpy && x > 0 && y > 0)
	{
		firstline(cpx, cpy);
	}
	while (*cpy > 1)
	{
		middleline(cpx, cpy, x);
	}
	if (*cpy == 1)
	{
		lastline(cpx, cpy, x);
	}
}
