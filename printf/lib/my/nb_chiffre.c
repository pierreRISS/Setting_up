/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** nb_chiffre.c
*/

int nb_chiffre(long long int nb)
{
    int count = 0;

    if (nb < 0){
        nb = - nb;
    }
    if (nb == 0){
        return 1;
    }
    while (nb >= 1) {
        nb /= 10;
        count++;
    }
    return count;
}
