/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** count_nb.c
*/

int count_nb(int nb)
{
    int count = 0;

    while (nb >= 1) {
        nb /= 10;
        count++;
    }
    return count;
}
