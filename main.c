/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** main.c
*/
#include "include/my.h"
#include "include/struct.h"
#include "include/other_libs.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int max_height = 0;
    int width = 0;
    char *map;

    if (argc <= 1 || argc > 3){
        my_puterror("Invalide number of arguments\n");
        exit(84);
    }
    if (argc == 2){
        map = read_file(argv[1], &max_height, &width);
    }
    if (argc == 3){
        map = generate_map(argv[2], argv[1]);
        max_height = str_to_int(argv[1]);
        width = str_to_int(argv[1]);
    }
    traitement(max_height, width, map);
}