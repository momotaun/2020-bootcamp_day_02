/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:45:14 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/10 08:35:41 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_alphabet(void) {
    char	ch;
   	ch = 'a';

    while (ch <= 'z') {
        ft_putchar(ch);
        ch++;
    }
    ft_putchar('\n');
}
