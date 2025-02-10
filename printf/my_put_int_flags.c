/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** my_put_int_flags.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mystruct.h"


int before_flags(flags_t infos)
{
    if (infos.before_nbr != "\0")
        my_putstr(infos.before_nbr);
        return my_strlen(infos.before_nbr);
    return 0;
}

int my_put_int_flags(flags_t infos, char *str)
{
    int count;
    int len = my_strlen(str);

    if (infos.precision != -1)
        infos.largeur_0 = infos.precision;
    if (infos.before_nbr != "\0")
        len += my_strlen(infos.before_nbr);
    count = len;
    if (infos.largeur > 0)
        count += put_space(len, infos.largeur);
    before_flags(infos);
    if (infos.largeur_0 > 0)
        count += put_left_0_int(len, infos.largeur_0);
    my_putstr(str);
    if (infos.largeur < 0) {
        count += put_space(len, - infos.largeur);
    }
    return count;
}
