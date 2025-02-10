/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** generate_map.c
*/
#include "include/other_libs.h"
#include "lib/my/libmy.h"
#include "include/my.h"
#include <stdlib.h>

static void error_handling(char *motif, char *size)
{
    for (int i = 1; motif[i] != '\0'; i++){
        if (!(motif[i] == 'o' || motif[i] == '.')){
            my_puterror("Invalide motif\n");
            exit(84);
        }
    }
    if (!is_number(size)){
        my_puterror("Invalide given paramter, should be a number\n");
        exit(84);
    }
    if (str_to_int(size) <= 0){
        my_puterror("Invalide size\n");
        exit(84);
    }
}

static char boucle_str(char *motif, int *j)
{
    char c;

    if (motif[(*j)] == '\0'){
        (*j) = 1;
        return motif[0];
    }
    c = motif[(*j)];
    (*j)++;
    return c;
}

char *generate_map(char *motif, char *size)
{
    char *str;
    int isize;
    int j = 0;
    int x = 0;

    error_handling(motif, size);
    isize = str_to_int(size);
    str = malloc(((isize * isize) + isize + 1));
    for (; x < isize; x++){
        for (int y = 0; y <= isize - 1; y++){
            str[(((x * isize)) + y + x)] = boucle_str(motif, &j);
        }
        str[((x * isize) + isize + x)] = '\n';
    }
    str[((x * isize) + isize)] = '\0';
    return str;
}
