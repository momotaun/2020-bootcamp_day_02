void    ft_putchar(char c);

void    ft_print_comb() {
    char    num1;
    char    num2;
    char    num3;
    char    num4;

    num1 = '0';
    num2 = '0';
    num3 = '0';
    num4 = '0';

    while (num1 <= '9') {
        while (num2 <= '9') {
            while (num3 <= '9') {
                while (num4 <= '9') {
                    ft_putchar(num1);
                    ft_putchar(num2);
                    ft_putchar(' ');
                    ft_putchar(num3);
                    ft_putchar(num4);
                    if (num1 == '9' && num2 =='9' && num3 == '9' && num4 == '9') {
                        break;
                    }
                    ft_putchar(',');
                    ft_putchar(' ');
                    num4++;
                }
                num4 = '0';
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
