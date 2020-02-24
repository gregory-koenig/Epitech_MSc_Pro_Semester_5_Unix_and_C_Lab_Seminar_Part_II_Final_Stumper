/*
** EPITECH PROJECT, 2019
** main
** File description:
** C Pool FinalStumper
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"
#include "rush3.h"
#define BUFF_SIZE 30000

char *rush3(char *buff);

int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;

    while((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
        offset += len;
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}
