/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-pierre.riss
** File description:
** my_compute_power_rec.c
*/

#include "include/my.h"

double my_compute_lower_it(int nb, int p)
{
    return ((double)nb / (double)my_compute_power_rec(10, p + 1));
}
