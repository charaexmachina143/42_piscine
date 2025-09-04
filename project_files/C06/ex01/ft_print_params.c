/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:28:11 by doberste          #+#    #+#             */
/*   Updated: 2025/09/04 11:00:14 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	o;

	i = argc - 1;
	o = 1;
	while (o <= i)
	{
		write(1, argv[o], ft_strlen(argv[o]));
		write(1, "\n", 1);
		o++;
	}
	return (0);
}
