/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:11:35 by doberste          #+#    #+#             */
/*   Updated: 2025/08/27 10:11:40 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (str[i])
	{
		while (str[i] >= 'a' && str[i] <= 'z' && j == 0)
			i++;
		if (str[i] >= '0' && str[i] <= '9' && j == 1)
			j = 0;
		if (str[i] >= '0' && str[i] <= '9' && j == 0)
			i++;
		else if (str[i] >= 'A' && str[i] <= 'Z' && j == 0)
			str[i] = str[i] + 32; 
		else if (str[i] >= 'A' && str[i] <= 'Z' && j == 1)
			j = 0;
		else if (str[i] >= 'a' && str[i] <= 'z' && j == 1)
		{
			str[i] = str[i] - 32;
			j = 0;
		}
		else
			j = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char c[] = "hi, hoW are you? 42woRds foRty-tWo; fiFty+and+one";
// 	printf("%s", ft_strcapitalize(c));
// }