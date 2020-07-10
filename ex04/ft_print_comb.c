/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:32:38 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/10 08:32:45 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_comb(void) {
    char    num1;
    char    num2;
    char    num3;

    num1 = '0';
    num2 = '0';
    num3 = '0';

    while (num1 <= '9') {
        while (num2 <= '9') {
            while (num3 <= '9') {
                if (num1 < num2 && num2 < num3) {
                    ft_putchar(num1);
                    ft_putchar(num2);
                    ft_putchar(num3);
                    if (num1 == '7' && num2 =='8' && num3 == '9') {
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
