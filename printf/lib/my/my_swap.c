/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday04-sacha.henneveux
** File description:
** my_swap.c
*/

void my_swap(int *a, int *b)
{
    int temps = *a;

    *a = *b;
    *b = temps;
}
