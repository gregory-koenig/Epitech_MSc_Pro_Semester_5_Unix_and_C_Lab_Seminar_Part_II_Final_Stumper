/*
** EPITECH PROJECT, 2019
** rush3.c
** File description:
** C Pool FinalStumper
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void print_char(int num)
{
    if (num != 5)
        my_putstr(" || ");
}

void print_rush(int num, int line, int height)
{
    char *str;

    if (num == 1)
        str = "[rush1-1] ";
    if (num == 2)
        str = "[rush1-2] ";
    if (num == 3)
        str = "[rush1-3] ";
    if (num == 4)
        str = "[rush1-4] ";
    if (num == 5)
        str = "[rush1-5] ";
    my_putstr(str);
    my_put_nbr(line);
    my_putchar(' ');
    my_put_nbr(height);
}

void check_rush(char *buff, int line, int height)
{
    if (buff[0] == 'o')
        print_rush(1, line, height);
    if (buff[0] == '*' || buff[0] == '/')
        print_rush(2, line, height);
    if (buff[0] == 'B' && (height == 1 || line == 1)) {
        for (int i = 3; i <= 5; i++) {
            print_rush(i, line, height);
            print_char(i);
        }
    }
    if (buff[line - 1] == 'A')
        print_rush(3, line, height);
    if (buff[(((line + 1) * height) - 1) - line] == 'A')
        print_rush(4, line, height);
    if (buff[((line + 1) * height) - 2] == 'A')
        print_rush(5, line, height);
}

int rush3(char *buff)
{
    int height = 0;
    int line = 0;

    if (my_strcmp(buff, "Invalid size\n") == 0) {
        write(2, "Invalid size\n", 13);
        return (84);
    }
    while (buff[line] != '\n')
        line++;
    for (int i = 0; i < my_strlen(buff); i++) {
        if (buff[i] == '\n')
            height++;
    }
    check_rush(buff, line, height);
    my_putchar('\n');
    return (0);
}
