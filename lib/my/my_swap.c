/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** Swaps the content of two integers
*/

void my_swap(int *a, int *b)
{
    int x = *a;

    *a = *b;
    *b = x;
}
