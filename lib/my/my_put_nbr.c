/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Displays the number given as a parameter
*/

void my_putchar(char c);

void is_neg(void)
{
    my_putchar('-');
    my_putchar(2 + 48);
    my_putchar(1 + 48);
    my_putchar(4 + 48);
    my_putchar(7 + 48);
    my_putchar(4 + 48);
    my_putchar(8 + 48);
    my_putchar(3 + 48);
    my_putchar(6 + 48);
    my_putchar(4 + 48);
    my_putchar(8 + 48);
}

int my_put_nbr(int nb)
{
    int u;

    if (nb == -2147483648) {
        is_neg();
    } else {
        if (nb < 0) {
            my_putchar('-');
            nb *= -1;
        }
        if (nb > 9) {
            u = nb % 10;
            nb = (nb - u) / 10;
            my_put_nbr(nb);
            my_putchar(u + 48);
        } else {
            my_putchar(nb + 48);
        }
    }
}
