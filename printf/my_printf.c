/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** my_printf.c
*/
#include <stdarg.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/mystruct.h"

void static initialize_flags(flags_t *flags)
{
    flags->largeur = 0;
    flags->before_nbr = "\0";
    flags->largeur_0 = 0;
    flags->precision = -1;
    flags->type = 0;
    flags->bool = 0;
}

int my_printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    list_spe_t l;
    flags_t flags;

    l.format = format;
    va_start(args, format);
    for (l.i = 0; l.format[l.i] != '\0'; l.i++) {
        if (l.format[l.i] == '%') {
            l.i++;
            initialize_flags(&flags);
            flags = check_flag1(&l, flags);
            check_percent(l, args, &count, flags);
        } else {
            my_putchar(l.format[l.i]);
            count++;
        }
    }
    va_end(args);
    return count;
}
