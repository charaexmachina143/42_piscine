/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnilov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:53:27 by dnilov            #+#    #+#             */
/*   Updated: 2025/08/31 18:54:46 by dnilov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"
#include "unistd.h"

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_is_digit(char c)
{
	return (c >= '1' && c <= '4');
}

int	is_valid_input(char *arg)
{
	int	i;
	int	count;

	if (ft_strlen(arg) != 31)
	{
		return (0);
	}
	i = 0;
	count = 0;
	while (arg[i])
	{
		if ((i % 2 == 0 && !ft_is_digit(arg[i])) || (i % 2 == 1
				&& arg[i] != ' '))
		{
			return (0);
		}
		if (i % 2 == 0)
		{
			count++;
		}
		i++;
	}
	return (1);
}

int	*string_to_int_array(char *str)
{
	int	i;
	int	i_arr;
	int	*arr;

	arr = (int *)malloc(4 * 16);
	i_arr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			arr[i_arr] = (int)str[i] - 48;
			i_arr++;
		}
		i++;
	}
	return (arr);
}
