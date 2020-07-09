/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:45:31 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/09 17:45:59 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb() {
    char num1;
    char num2;
    char num3;

    num1 = '0';
    num2 = '0';
    num3 = '0';

    while(num1 <= '9') {
        
        while(num2 <= '9') {
            
            while(num3 <= '9') {
                if(num1 < num2 && num2 < num3) {
                    ft_putchar(num1);
                    ft_putchar(num2);
                    ft_putchar(num3);
                    if(num1 == '7' && num2 =='8' && num3 == '9') {
                        break;
                    }

                    ft_putchar(',');
                    ft_putchar(' ');
                }

                num3++;
            }

            num3 = '0';
            num2++;

        }

        num2 = '0';
        num1++;
    }
    ft_putchar('\n');

}
