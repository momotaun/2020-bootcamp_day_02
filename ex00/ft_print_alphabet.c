/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:45:14 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/09 17:39:56 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet() {
    char ch;
   	ch = 'a';

    while(ch <= 'z') {
        ft_putchar(ch);
        ch++;
    }
    ft_putchar('\n');
}
