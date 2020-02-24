/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Reverses a string
*/

char *my_revstr(char *str)
{
    int count = 0;
    char tmp;

    for (int i = 0; str[i] != '\0'; i++)
        count++;
    count -= 1;
    for (int i = 0; i < count; i++, count--) {
        tmp = str[i];
        str[i] = str[count];
        str[count] = tmp;
    }
    return (str);
}
