/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:56:00 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/09 17:41:58 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers() {
    char ch;
   	ch = '0';

    while(ch <= '9') {
        ft_putchar(ch);
        ch++;
    }
    ft_putchar('\n');
}
