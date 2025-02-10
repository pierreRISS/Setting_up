/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday03-sacha.henneveux
** File description:
** my_isneg.c
*/
#include "my.h"
#include "mystruct.h"

int my_isneg(int n)
{
    if (n >= 0) {
    my_putchar('P');
    } else {
    my_putchar('N');
    }
    return 0;
}
