/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** flags_detector.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/mystruct.h"

flags_t lenght_modifiers(list_spe_t *l, flags_t flags)
{
    switch ((*l).format[(*l).i]) {
    case 'l':
        break;
    case 'h':
        break;
    case 'L':
        break;
    }
    return flags;
}

flags_t lenght_modifiers_two_bis(list_spe_t *l, flags_t flags)
{
    switch ((*l).format[(*l).i]) {
    case 'h':
        (*l).i++;
        if ((*l).format[((*l).i)] == 'h'){
            (*l).i++;
            flags.type = 1;
        } else {
            flags.type = 2;
        }
        break;
    }
    return flags;
}

flags_t lenght_modifiers_two(list_spe_t *l, flags_t flags)
{
    switch ((*l).format[(*l).i]){
    case 'l':
        flags.type = 1;
        (*l).i++;
        if ((*l).format[((*l).i)] == 'l'){
            (*l).i++;
            flags.type = 4;
        } else {
            flags.type = 1;
        }
        break;
    default:
            return lenght_modifiers_two_bis(l, flags);
        break;
    }
    return flags;
}

static flags_t precision(list_spe_t *l, flags_t flags)
{
    switch ((*l).format[(*l).i]) {
    case '.':
        (*l).i++;
        flags.precision = nbr_selector((*l).format, &((*l).i));
    }
    return lenght_modifiers_two(l, flags);
}

flags_t check_flag2(list_spe_t *l, flags_t flags)
{
    if ((*l).format[((*l).i)] >= 49 && (*l).format[(*l).i] <= 57)
        flags.largeur = nbr_selector((*l).format, &((*l).i));
    switch ((*l).format[(*l).i]) {
    case '0' :
        (*l).i++;
        flags.largeur_0 = nbr_selector((*l).format, &((*l).i));
        break;
    case '-':
        (*l).i++;
        flags.largeur = -nbr_selector((*l).format, &((*l).i));
        break;
    }
    return precision(l, flags);
}

flags_t check_flag1(list_spe_t *l, flags_t flags)
{
    switch ((*l).format[(*l).i]) {
    case '+':
    case ' ':
        flags.before_nbr = char_to_str((*l).format[(*l).i]);
        (*l).i++;
        break;
    case '#':
        flags.bool = 1;
        (*l).i++;
        break;
    }
    return check_flag2(l, flags);
}
