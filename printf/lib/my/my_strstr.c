/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-sacha.henneveux
** File description:
** my_strstr.c
*/
#include "my.h"
#include "mystruct.h"

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; i++) {
        if (my_strncmp(&str[i], to_find, my_strlen(to_find)) == 0) {
            return &str[i];
        }
    }
}
