/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:56:00 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/10 08:40:21 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void) {
    char	ch;
   	ch = '0';

    while (ch <= '9') {
        ft_putchar(ch);
        ch++;
    }
    ft_putchar('\n');
}
