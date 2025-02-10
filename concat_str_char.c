/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-pierre.riss
** File description:
** my_two_str.c
*/

#include <stdarg.h>
#include "lib/my/libmy.h"
#include <stdlib.h>
#include "include/other_libs.h"
#include <stdio.h>

char *concat_str_char(char *str1, char chara)
{
    char *str = malloc(my_strlen(str1) + 2);
    int i = 0;

    for (; str1[i] != '\0'; i++){
        str[i] = str1[i];
    }
    str[i] = chara;
    str[i + 1] = '\0';
    if (str1[i] != '\0'){
        free(str1);
    }
    return str;
}
