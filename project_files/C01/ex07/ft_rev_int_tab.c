/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 12:39:05 by doberste          #+#    #+#             */
/*   Updated: 2025/08/24 12:39:07 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

// int	main(void)
// {
// 	int a[] = {1, 2, 3, 4, 5, 6};
// 	int as = sizeof(a) / sizeof(a[0]);
// 	int c;

// 	ft_rev_int_tab(a, as);
// 	for (int c = 0; c < as; c++)
// 	{
// 		printf("%i", a[c]);
// 	}
// }