/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** count_print_nb.c
*/
#include "include/my.h"
#include "include/mystruct.h"

int count_print_nb(long long int nb, flags_t infos)
{
    char *str;

    nb = type_int(infos, nb);
    if (nb < 0) {
        infos.before_nbr = "-";
        nb = -nb;
    }
    str = int_to_str(nb);
    return my_put_int_flags(infos, str);
}
