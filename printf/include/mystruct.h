/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** mystruct.h
*/

#ifndef MYSTRUCT_H_
    #define MYSTRUCT_H_

typedef struct flags {
    int largeur_0;
    int largeur;
    int precision;
    char *before_nbr;
    int type;
    int bool;
} flags_t;

typedef struct list_spe {
    const char *format;
    int i;
} list_spe_t;

#endif
