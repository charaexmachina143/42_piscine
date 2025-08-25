/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:41:52 by doberste          #+#    #+#             */
/*   Updated: 2025/08/23 13:41:54 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_b;
	*b = temp_a;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*ap;
	int	*bp;

	a = 5;
	b = 2;
	ap = &a;
	bp = &b;
	printf("%i", a);
	printf("%i",b);
	ft_swap(ap, bp);
	printf("%i",a);
	printf("%i",b);
}
*/