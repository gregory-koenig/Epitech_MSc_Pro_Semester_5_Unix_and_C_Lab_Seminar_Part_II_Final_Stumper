/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Compares the two strings "s1" and "s2"
*/

int my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i] && s1[i] < s2[i]) {
            return (-1);
        } else if (s1[i] != s2[i] && s1[i] > s2[i]) {
            return (1);
        }
    }
    return (0);
}
