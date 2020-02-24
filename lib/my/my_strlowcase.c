/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** Puts every letter of every word in it in lowercase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] += 32;
    }
    return (str);
}
