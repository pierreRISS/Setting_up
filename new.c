/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** new.c
*/

#include "include/my.h"
#include "include/struct.h"
#include "include/other_libs.h"
#include <stdlib.h>
#include <stdio.h>

char *my_world_array(char **str_array)
{
    int len = 1;
    for (int i = 0; str_array[i] != NULL; i++){
        len += my_strlen(str_array[i]) + 1;
    }

    char *final = malloc(len);
    my_strcpy(final, str_array[0]);
    for (int i = 1; str_array[i] != NULL; i++){
        my_strcat(final, str_array[i]);
    }
    final[len - 1] = '\0';
}