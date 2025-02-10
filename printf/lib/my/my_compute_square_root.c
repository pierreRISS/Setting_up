/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-sacha.henneveux
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    if (nb < 0) {
        return 0;
    }
    if (nb == 0 || nb == 1) {
        return nb;
    }
    for (int i = 1; i <= nb / 2; i++) {
        if (i * i == nb) {
            return i;
        }
    }
    return 0;
}
