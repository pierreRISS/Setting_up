/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday03-sacha.henneveux
** File description:
** my_put_nbr.c
*/
#include "my.h"
#include "mystruct.h"

int my_put_nbr(int nb)
{
    long nbr = nb;

    if (nbr < 0) {
    my_putchar(45);
    nbr *= -1;
    }
    if (nbr > 9) {
    my_put_nbr(nbr / 10);
    }
    my_putchar(nbr % 10 + 48);
}
