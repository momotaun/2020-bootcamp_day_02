/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:51:24 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/10 08:39:00 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void) {
    char	ch;
	ch = 'z';

    while (ch >= 'a') {
        ft_putchar(ch);
        ch--;
    }
    ft_putchar('\n');
}
