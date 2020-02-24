/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** Concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    for (int i = 0; src[i] != '\0'; i++) {
        if (!dest[i] || dest[i] == '\0')
            dest[i + 1] = src[i];
    }
    return (dest);
}
