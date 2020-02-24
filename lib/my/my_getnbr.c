/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** Returns a number, sent to the function as a string
*/

int get_sign(int sign, int n)
{
    if (n == '+') {
        sign *=  1;
    } else if (n == '-') {
        sign *= -1;
    }
    return (sign);
}

int my_getnbr(char const *str)
{
    int sign = 1;
    long res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '+' || str[i] == '-') {
            sign = get_sign(1, str[i]);
        } else if (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
            res = res * 10 + str[i] - '0';
        } else {
            return (res);
        }
        if (res > 2147483647) {
            return (0);
        }
    }
    res *= sign;
    return (res);
}
