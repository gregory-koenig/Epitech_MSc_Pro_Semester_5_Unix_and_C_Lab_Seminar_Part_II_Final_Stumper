/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** Capitalizes the first letter of each word
*/

char *my_strcapitalize(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            str[i + 1] -= 32;
        if (str[i - 1] != ' ' && str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}
