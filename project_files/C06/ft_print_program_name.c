/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doberste <doberste@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:16:29 by doberste          #+#    #+#             */
/*   Updated: 2025/09/03 13:22:34 by doberste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char *argv[])
{
    if (argc >= 1)
        write(1, argv[0], ft_strlen(argv[0]));
        write(1, "\n", 1);
    return (0);
} 






