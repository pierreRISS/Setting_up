/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** base.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/mystruct.h"

char *base(int base, int maj)
{
    if (base == 16 && maj == 0)
        return "0123456789abcdef";
    if (base == 16 && maj == 1)
        return "0123456789ABCDEF";
    if (base == 8)
        return "01234567";
}
