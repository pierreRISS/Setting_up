/*
** EPITECH PROJECT, 2024
** my_isneg.c
** File description:
** Print N if n negative else P
*/
#include "libmy.h"

int my_isneg(int n)
{
    if (n < 0){
        my_putchar(78);
    } else {
        my_putchar(80);
    }
}
