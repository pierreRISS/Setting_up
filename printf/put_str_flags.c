/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** put_str_flags.c
*/

#include "include/my.h"
#include "include/mystruct.h"
#include <stdlib.h>

int my_put_str_flags(flags_t infos, char *str)
{
    char *str1 = cut_str(str, infos.precision);
    int len = my_strlen(str1);
    int count = len;

    if (infos.largeur_0 != 0){
        infos.largeur = infos.largeur_0;
    }
    if (infos.largeur > 0) {
        count += put_space(len, infos.largeur);
    }
    my_putstr(str1);
    if (infos.largeur < 0) {
        infos.largeur *= -1;
        count += put_space(len, infos.largeur);
    }
    return count;
}
