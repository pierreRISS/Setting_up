/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** type_spcifier.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/mystruct.h"


int last_flags(list_spe_t l, va_list args, int *count, flags_t flags)
{
    switch ((l).format[(l).i]) {
    case 'b':
        (*count) += modulable_conversion(flags, va_arg(args, int), "01");
        break;
    case 'E':
        (*count) += my_put_double_scientific(va_arg(args, double), flags, 1);
        break;
    default:
        return -1;
        break;
    }
}

int next_flag(list_spe_t l, va_list args, int *count, flags_t flags)
{
    switch ((l).format[(l).i]) {
    case 'n':
        nb_char_before(va_arg(args, int *), *count);
        break;
    case 'f':
    case 'F':
        (*count) += my_put_double(va_arg(args, double), flags, 1);
        break;
    case 'g':
        (*count) += my_put_g(va_arg(args, double), flags);
        break;
    case 'e':
        (*count) += my_put_double_scientific(va_arg(args, double), flags, 0);
        break;
    default:
        return last_flags(l, args, count, flags);
        break;
    }
}

int mini_printf_flag(list_spe_t l, va_list args, int *count, flags_t flags)
{
    switch ((l).format[(l).i]) {
    case 'c':
        (*count) += my_put_str_flags(flags, char_to_str(va_arg(args, int)));
        break;
    case 's':
        (*count) += my_put_str_flags(flags, va_arg(args, char *));
        break;
    case 'd':
    case 'i':
        (*count) += count_print_nb(va_arg(args, long long int), flags);
        break;
    case '%':
        (*count) += my_putchar('%');
        break;
    default:
        return next_flag(l, args, count, flags);
        break;
    }
}

int check_percent(list_spe_t l, va_list args, int *count, flags_t flag)
{
    switch ((l).format[(l).i]) {
    case 'x':
        (*count) += modulable_conversion(flag, va_arg(args, int), base(16, 0));
        break;
    case 'X':
        (*count) += modulable_conversion(flag, va_arg(args, int), base(16, 1));
        break;
    case 'o':
        (*count) += modulable_conversion(flag, va_arg(args, int), base(8, 0));
        break;
    case 'p':
        (*count) += pointer_flag(va_arg(args, int *));
        break;
    case 'u':
        (*count) += decimal_unsigned(va_arg(args, long int));
        break;
    default:
        return mini_printf_flag(l, args, count, flag);
        break;
    }
}
