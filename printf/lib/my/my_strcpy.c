/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-sacha.henneveux
** File description:
** my_strcpy.c
*/
#include "my.h"
#include "mystruct.h"

char *my_strcpy(char *dest, char const *src)
{
    int len = my_strlen(src);

    for (int i = 0; i <= len; i++) {
        dest[i] = src[i];
    }
    return dest;
}
