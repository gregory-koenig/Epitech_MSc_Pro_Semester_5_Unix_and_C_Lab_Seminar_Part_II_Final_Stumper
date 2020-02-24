/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** Compares the first (at most) "n" bytes of two strings "s1" and "s2"
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i <= n; i++) {
        if (s1[i] != s2[i] && s1[i] < s2[i]) {
            return (-1);
        } else if (s1[i] != s2[i] && s1[i] > s2[i]) {
            return (1);
        }
    }
    return (0);
}
