/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** int_to_str.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mystruct.h"

char *int_to_str(long long int nb)
{
    int len = nb_chiffre(nb) -1;
    char *str;
    long long int solo_nbr;

    str = malloc(len + 2);
    for (int i = len; i >= 0; i--) {
        solo_nbr = nb / my_compute_power_rec(10, i);
        str[len - i] = solo_nbr + 48;
        nb = nb - (solo_nbr* my_compute_power_rec(10, i));
    }
    str[len + 1] = '\0';
    return str;
}
