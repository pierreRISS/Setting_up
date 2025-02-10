/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** traitement.c
*/

#include "include/my.h"
#include "include/struct.h"
#include "include/other_libs.h"
#include <stdlib.h>
#include <stdio.h>

void static fill_historigram(int x, int i, char *map, int_array_t nbrs)
{
    if (map[i + x] == '.'){
        nbrs.array[i]++;
    }
    if (map[i + x] == 'o'){
        nbrs.array[i] = 0;
    }
}

char *modify_map(char *map, int width, struct max_square_info *max_square)
{
    int i = 0;

    for (int d = 0; d < max_square->max; d++){
        i = max_square->cordo + (max_square->max_y - d) * (width + 1);
        for (int j = i; j < i + max_square->max; j++){
            map[j] = 'x';
        }
    }
    return map;
}

int traitement(int max_height, int width, char *map)
{
    int_array_t nbrs;
    struct max_square_info max_square;

    max_square.cordo = 0;
    max_square.max = 0;
    max_square.y = -1;
    max_square.max_y = 0;
    nbrs.len = width;
    instantiatte_array_nbr(&nbrs, width);
    for (int height = 0; height < max_height; height++){
        for (int i = 0; i < nbrs.len; i++){
            fill_historigram((height * (width + 1)), i, map, nbrs);
        }
        find_max_square(nbrs, &max_square);
    }
    my_printf("%s", modify_map(map, width, &max_square));
    free(map);
    free(nbrs.array);
    return 0;
}