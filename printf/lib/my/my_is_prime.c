/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-sacha.henneveux
** File description:
** my_is_prime.c
*/

#include <stdio.h>

int my_is_prime(int nb)
{
    int nb_time = 0;

    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0) {
            nb_time++;
        }
    }
    if (nb_time == 2) {
        return 1;
    } else {
        return 0;
    }
}
