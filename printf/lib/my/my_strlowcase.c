/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-sacha.henneveux
** File description:
** my_strlowcase.c
*/
#include "my.h"
#include "mystruct.h"

char *my_strlowcase(char *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
