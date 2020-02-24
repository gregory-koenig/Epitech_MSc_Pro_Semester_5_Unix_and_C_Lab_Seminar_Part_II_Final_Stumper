/*
** EPITECH PROJECT, 2019
** rush1-1
** File description:
** C Pool rush1
*/

#include "my.h"

void first_line(char corner, char center, int x)
{
    my_putchar(corner);
    for (int i = 1; i < x - 1; i++)
        my_putchar(center);
    if (x != 1)
        my_putchar(corner);
    my_putchar('\n');
}

void mid_line(char side, int x)
{
    my_putchar(side);
    for (int i = 1; i < x - 1; i++)
        my_putchar(' ');
    if (x != 1)
        my_putchar(side);
    my_putchar('\n');
}

void rush(int x, int y)
{
    char *str = "Invalid size\n";
    char corner = 'o';
    char center = '-';
    char side = '|';

    if (x <= 0 || y <= 0) {
        for (int i = 0; str[i] != '\0'; i++)
            my_putchar(str[i]);
        return;
    }
    first_line(corner, center, x);
    for (int i = 1; i < y -1; i++)
        mid_line(side, x);
    if (y != 1)
        first_line(corner, center, x);
}

int main(int ac, char **av)
{
    rush(my_getnbr(av[1]), my_getnbr(av[2]));
    return (0);
}
