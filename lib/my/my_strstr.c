/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Finds the first occurrence of the substring "to_find" in the string "str"
*/

char *my_strstr(char *str, char const *to_find)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[count]) {
            count++;
        } else {
            count = 0;
            (str[i] != to_find[count]) ?: count++;
        }
        if (to_find[count] == '\0')
            return &str[(i - count) + 1];
    }
    return (0);
}
