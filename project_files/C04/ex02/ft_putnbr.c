/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:01:56 by doberste          #+#    #+#             */
/*   Updated: 2025/09/04 10:17:31 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_revstr(char *str, int size);

void	ft_putnbr(int nb)
{
	char			buff[100];
	int				i;
	unsigned int	n;

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		n = (unsigned int)(-((long)nb));
	}
	else
		n = (unsigned int)nb;
	if (n == 0)
	{
		write(1, "0", 1);
	}
	while (n > 0)
	{
		buff[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	ft_revstr(buff, i);
	write(1, buff, i);
}

void	ft_revstr(char *str, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	ft_putnbr(-42);
// }