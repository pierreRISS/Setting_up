/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday04-sacha.henneveux
** File description:
** my_getnbr.c
*/
#include "my.h"
#include "mystruct.h"

int my_getnbr(char const *str)
{
    int len = 0;
    char string[] = "";
    int j = 0;
    int nb_final = 0;

    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        if (str[i] >= 48 || str[i] <= 57) {
            string[j] = str[i] - 48;
            my_putchar(string[j] + 48);
        }
    }
    nb_final = string[0] * 10 + string[1];
    return nb_final;
}
