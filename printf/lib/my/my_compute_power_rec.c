/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-sacha.henneveux
** File description:
** my_compute_power_rec.c
*/

long long int my_compute_power_rec(int nb, int p)
{
    long long int nbr = nb;

    if (p < 0) {
        return 0;
    } else if (p == 0) {
        return 1;
    }
    return nbr * my_compute_power_rec(nb, p - 1);
}
