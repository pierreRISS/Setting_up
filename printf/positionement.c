/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** positionement.c
*/

#include <stdlib.h>
#include "include/my.h"

int put_left_0_int(int len, int taille)
{
    int count = 0;

    if (len < taille){
        for (int i = 0; i < taille - len; i++){
            my_putchar('0');
            count++;
        }
    }
    return count;
}

int put_space(int len, int taille)
{
    int count = 0;

    if (len < taille){
        for (int i = 0; i < taille - len; i++){
            my_putchar(' ');
            count++;
        }
    }
    return count;
}

char *cut_str(char *str, int nb_char)
{
    int len = my_strlen(str);
    char *str_final = malloc(nb_char + 1);
    int i = 0;

    if (nb_char == -1 || len < nb_char) {
        return str;
    }
    for (; i < nb_char; i++) {
        str_final[i] = str[i];
    }
    str_final[i] = '\0';
    return str_final;
}
