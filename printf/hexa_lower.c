/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** hexa_lower.c
*/

#include <stdlib.h>
#include "include/my.h"

int hexa_lower(unsigned long int nb)
{
    char *hexa_values = "0123456789abcdef";
    char *hexa_string;
    char *hexa_string_final;
    int size;
    int i = 0;

    hexa_string = malloc(nb_chiffre(nb) * sizeof(char));
    for (; nb != 0; i++) {
        hexa_string[i] = hexa_values[nb % 16];
        nb /= 16;
    }
    hexa_string[i] = '\0';
    hexa_string_final = my_revstr(hexa_string);
    my_putstr(hexa_string_final);
    return my_strlen(hexa_string_final);
}
