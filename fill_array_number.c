/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** fill_array_number.c
*/

#include <stdlib.h>
#include "include/struct.h"

int *instantiatte_array_nbr(int_array_t *int_array, int len_tab)
{
    (*int_array).array = malloc(len_tab * sizeof(int));
    for (int d = 0; d < len_tab; d++){
        (*int_array).array[d] = 0;
    }
}
