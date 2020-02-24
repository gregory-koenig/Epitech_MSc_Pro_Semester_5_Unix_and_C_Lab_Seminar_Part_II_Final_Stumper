/*
** EPITECH PROJECT, 2019
** my_strtncat
** File description:
** Concatenates "n" characters of the "src" string to the end of the "dest"
** string
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    for (int i = 0; src[i] <= nb; i++) {
        if (!dest[i] || dest[i] == '\0')
            dest[i + 1] = src[i];
    }
    return (dest);
}
