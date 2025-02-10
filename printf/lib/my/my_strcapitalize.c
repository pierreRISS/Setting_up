/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-sacha.henneveux
** File description:
** my_strcapitalize.c
*/
#include "my.h"
#include "mystruct.h"

char *my_strcapitalize(char *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] < 97 || str[i] > 122 || str[i]) {
            str[i + 1] = str[i + 1] - 32;
        }
    }
    return str;
}
