/*
** EPITECH PROJECT, 2019
** rush1-3
** File description:
** C Pool rush1
*/

#include "my.h"

void first_line(char left, char center, int x)
{
    my_putchar(left);
    for (int i = 1; i < x - 1; i++)
        my_putchar(center);
    if (x != 1)
        my_putchar(left);
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
    char left = 'A';
    char center = 'B';
    char right = 'C';

    if (x <= 0 || y <= 0) {
        for (int i = 0; str[i] != '\0'; i++)
            my_putchar(str[i]);
        return;
    }
    if (x == 1 || y == 1) {
        left = center;
        right = center;
    }
    first_line(left, center, x);
    for (int i = 1; i < y -1; i++)
        mid_line(center, x);
    if (y != 1)
        first_line(right, center, x);
}

int main(int ac, char **av)
{
    rush(my_getnbr(av[1]), my_getnbr(av[2]));
    return (0);
}
