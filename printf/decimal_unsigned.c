/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** decimal_unsigned.c
*/

#include "include/my.h"

int count_print_nb2(int nb)
{
    int len = 0;

    len = my_put_nbr(nb);
    while (nb >= 1) {
        nb = nb / 10;
        len++;
    }
    return len;
}

int my_put_nbr_unsigned(unsigned int nb)
{
    unsigned nbr = nb;

    if (nbr < 0) {
    my_putchar(45);
    nbr *= -1;
    }
    if (nbr > 9) {
    my_put_nbr(nbr / 10);
    }
    my_putchar(nbr % 10 + 48);
}

int nb_chiffre_unsigned(unsigned int nb)
{
    int count = 0;

    while (nb >= 1) {
        nb /= 10;
        count++;
    }
    return count;
}

int decimal_unsigned(int nb)
{
    int nb_chiffre = 0;

    if (nb < 0) {
        my_put_nbr_unsigned(4294967296 + nb);
        nb_chiffre = nb_chiffre_unsigned(4294967296 + nb);
        return nb_chiffre;
    } else {
        return count_print_nb2(nb)-1;
    }
}
