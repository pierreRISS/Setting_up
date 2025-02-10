/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** compare_int.c
*/

#include "include/mystruct.h"

long long int type_int(flags_t infos, long long int value)
{
    if (infos.type == 0){
        return (int)value;
    }
    if (infos.type == 1){
        return (char)value;
    }
    if (infos.type == 2){
        return (short)value;
    }
    if (infos.type == 3){
        return (long int)value;
    }
    if (infos.type == 4){
        return value;
    }
}
