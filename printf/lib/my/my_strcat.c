/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday07-sacha.henneveux
** File description:
** my_strcat.c
*/
#include "my.h"
#include "mystruct.h"

char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    int i = 0;

    for (; i < len_src; i++) {
        dest[len_dest + i] = src[i];
    }
    dest[len_dest + i] = '\0';
    return dest;
}
