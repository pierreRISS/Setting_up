/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** my.h
*/
#include "struct.h"

#ifndef MY
    #define MY

int *instantiatte_array_nbr(int_array_t *int_array, int len_tab);
char *concat_str_char(char *str1, char chara);
void find_max_square(int_array_t nbrs, struct max_square_info *max_square);
char *read_file(char *path, int *height, int *witdh);
int is_number(char *str);
char *generate_map(char *motif, char *size);
int traitement(int max_height, int width, char *map);

#endif
