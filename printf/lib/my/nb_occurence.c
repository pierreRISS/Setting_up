/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-rush2-sacha.henneveux
** File description:
** nb_occurence.c
*/
#include "my.h"
#include "mystruct.h"

int check_maj(char c, char letter)
{
    if (c == letter || c == letter + 32) {
        return 1;
    } else {
        return 0;
    }
}

int check_min(char c, char letter)
{
    if (c == letter || c == letter - 32) {
        return 1;
    } else {
        return 0;
    }
}

int nb_occurence(char **av)
{
    int len = my_strlen(av[1]);
    int nb_letter = 0;
    char letter = av[2][0];

    for (int i = 0; i < len; i++) {
        if (is_lower(letter) == 0 && check_maj(av[1][i], letter)) {
            nb_letter++;
        }
        if (is_lower(letter) == 1 && check_min(av[1][i], letter)) {
            nb_letter++;
        }
    }
    return nb_letter;
}
