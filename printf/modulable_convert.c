/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** decimal_to_binary.c
*/

#include "include/my.h"
#include "include/mystruct.h"
#include <stdlib.h>

int modulable_conversion(flags_t infos, unsigned int nb, char *base_number)
{
    int base = my_strlen(base_number);
    char *conversion_str;
    char *conversion_str_final;
    int count = 0;

    conversion_str = malloc(nb_chiffre(nb) + 2);
    for (int i = 0; nb != 0; i++) {
        conversion_str[i] = base_number[nb % base];
        nb /= base;
    }
    if (infos.bool && base == 16 && !is_upper(base_number[base - 1])) {
        infos.before_nbr = "0x";
    } else if (infos.bool && base == 16 && is_upper(base_number[base - 1])) {
        infos.before_nbr = "0X";
    }
    if (infos.bool == 1 && base == 8)
        infos.before_nbr = "0";
    conversion_str = my_revstr(conversion_str);
    count += my_put_int_flags(infos, conversion_str);
    return count;
}
