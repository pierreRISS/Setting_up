/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** pointer_flag.c
*/
#include <stdio.h>
#include "include/my.h"

int pointer_flag(void *pointer)
{
    int nb_char = 0;

    if (pointer == NULL) {
        return my_putstr("(nil)");
    }
    nb_char += my_putstr("0x");
    nb_char += hexa_lower((unsigned long int)pointer);
    return nb_char;
}
