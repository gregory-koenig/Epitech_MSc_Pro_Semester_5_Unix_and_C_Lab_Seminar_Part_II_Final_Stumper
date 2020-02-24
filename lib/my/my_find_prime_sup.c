/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** Returns the smallest prime number that is greater than, or equal to,
** the number given as a parameter
*/

int is_prime(int nb)
{
    if (nb <= 0 || nb == 1)
        return (0);
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    int res = 0;
    int i = nb;

    while (res == 0) {
        if (is_prime(i) == 1) {
            res = i;
        } else {
            i++;
        }
    }
    return (res);
}
