/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 15:37:08 by doberste          #+#    #+#             */
/*   Updated: 2025/08/24 15:37:11 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sor_int_tab(int *tab, int size)
{
	int	min;
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		if (min != i)
		{
			temp = tab[min];
			tab[min] = tab[i];
			tab[i] = temp;
		}
		i++;
	}
}

int	main(void)
{
	int	a[] = {4, 3, 5, 6, 1, 2};
	int	as;

	as = sizeof(a) / sizeof(a[0]);
	ft_sor_int_tab(a, as);
	for (int c = 0; c < as; c++)
	{
		printf("%i", a[c]);
	}
}
