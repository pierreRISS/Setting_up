/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** read_file.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "lib/my/libmy.h"
#include "include/other_libs.h"

void know_height(char *map, int *height)
{
    char *str = "";

    for (int i = 0; map[i] != '\n'; i++){
        str = concat_str_char(str, map[i]);
    }
    (*height) = str_to_int(str);
}

int know_len(char *map)
{
    int len = 0;

    for (int i = 0; map[i] != '\n'; i++){
        len++;
    }
    return len;
}

char *read_file(char *path, int *height, int *witdh)
{
    int fp;
    char *map;
    struct stat sb;

    fp = open(path, O_RDONLY);
    if (fp == -1){
        my_puterror("Invalide path or file\n");
        exit(84);
    }
    stat(path, &sb);
    map = malloc(sb.st_size + 1);
    read(fp, map, sb.st_size + 1);
    know_height(map, height);
    (*witdh) = sb.st_size / (*height) - 1;
    map[sb.st_size] = '\0';
    my_strcpy(map, &(map[count_nb((*height)) + 1]));
    map[sb.st_size - count_nb((*height))] = '\0';
    close(fp);
    return map;
}
