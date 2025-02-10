/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-sacha.henneveux
** File description:
** my_find_prime_sup.c
*/
#include "mystruct.h"
#include "my.h"

int my_find_prime_sup(int nb)
{
    int prime = my_is_prime(nb);

    if (prime == 1) {
        return nb;
    } else {
        return my_find_prime_sup(nb + 1);
    }
}
