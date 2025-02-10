/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-sacha.henneveux
** File description:
** my_revstr.c
*/
#include "my.h"
#include "mystruct.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int j = 0;
    char temp[len];

    for (int i = len; i > 0; i--) {
        temp[j] = str[i - 1];
        j++;
    }
    my_strncpy(str, temp, len);
    return str;
}
