/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:00:12 by doberste          #+#    #+#             */
/*   Updated: 2025/08/28 17:47:33 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;
	int	o;
	int	tmp_i;

	o = 0;
	c = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == to_find[o])
		{
			i++;
			o++;
			if (to_find[o] == '\0')
			{
				return (&str[i - o]);
			}
		}
		i++;
		o = 0;
	}
	return (0);
}

// int 	main(void)
// {
// 	char src[] = "chara";
// 	char to_find[] ="ar";
// 	printf("%s", ft_strstr(src, to_find));
// }