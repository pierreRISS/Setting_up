/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** float_conversion.c
*/

#include "include/my.h"
#include "include/mystruct.h"
#include <stdlib.h>

double static rounded(double nb, int after_coma)
{
    int i = 0;
    int nbr_a_enlever;
    double nbr = nb - (long long int)nb;

    for (; i < after_coma; i++) {
        nbr *= 10;
        nbr_a_enlever = nbr;
        nbr -= nbr_a_enlever;
    }
    nbr *= 10;
    if ((long long int)nbr > 4){
        nb = nb + my_compute_lower_it(10, after_coma);
    }
    return nb;
}

char static *enleve_0(char *str)
{
    int len = my_strlen(str);

    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == '0'){
            str[i] = '\0';
        } else {
            return str;
        }
    }
    return str;
}

char static *my_put_decimal(double nb, int after_coma)
{
    int i = 0;
    long long int nbr_a_enlever;
    double nbr = nb - (long long int)nb;
    char *tab = malloc(after_coma + 3);

    for (; i < after_coma; i++) {
        nbr *= 10;
        nbr_a_enlever = nbr;
        tab[i] = nbr_a_enlever + 48;
        tab[i + 1] = '\0';
        nbr -= nbr_a_enlever;
    }
    tab[i] = '\0';
    return tab;
}

char *put_percentage(int multiple, int maj)
{
    int count = 2;
    char *str = malloc(52 + nb_chiffre(multiple));

    if (maj == 1){
        str = my_strcat(str, "E");
    } else {
        str = my_strcat(str, "e");
    }
    if (multiple >= 0) {
        str = my_strcat(str, "+");
    } else
        str = my_strcat(str, "-");
    if (multiple < 10) {
        str = my_strcat(str, "0");
        count++;
    }
    if (multiple == 0)
        str = my_strcat(str, "0");
    str = my_strcat(str, int_to_str(multiple));
    return str;
}

int static show_double(double nb, flags_t infos, int print_0)
{
    int compteur = 0;
    char *decim = malloc(infos.precision);
    char *str_final = malloc(infos.precision + (long long int)nb +10);

    str_final = int_to_str((long long int)nb);
    decim = my_put_decimal(nb - (long long int)nb, infos.precision);
    if (print_0 == 0){
        decim = enleve_0(decim);
    }
    if (my_strlen(decim) >= 1){
        str_final = my_strcat(str_final, ".");
    }
    str_final = my_strcat(str_final, decim);
    infos.precision = -1;
    compteur += my_put_int_flags(infos, str_final);
    return compteur;
}

double ajustement_flag(double nb, flags_t *infos)
{
    if ((*infos).precision == -1) {
        (*infos).precision = 6;
    }
    if ((long long int)nb < 0) {
        (*infos).before_nbr = "-";
        nb = -nb;
    }
    return nb;
}

int my_put_double(double nb, flags_t infos, int print_0)
{
    int multiple = 0;
    int compteur = 0;
    char *decim;

    nb = ajustement_flag(nb, &infos);
    nb = rounded(nb, infos.precision);
    compteur = show_double(nb, infos, print_0);
    return compteur;
}

static double one_decimal(double nb, int *multiple)
{
    while (nb < 1){
        (*multiple)--;
        nb *= 10;
    }
    while (nb > 10){
        (*multiple)++;
        nb /= 10;
    }
    return nb;
}

int my_put_double_scientific(double nb, flags_t infos, int maj)
{
    int multiple = 0;
    int compteur = 0;
    char *str = malloc((long long int)nb + infos.precision + 10);

    nb = ajustement_flag(nb, &infos);
    nb = one_decimal(nb, &multiple);
    nb = rounded(nb, infos.precision);
    str = int_to_str((long long int)nb);
    str = my_strcat(str, ".");
    str = my_strcat(str, my_put_decimal(nb -
    (long long int)nb, infos.precision));
    str = my_strcat(str, put_percentage(multiple, maj));
    infos.precision = -1;
    compteur += my_put_int_flags(infos, str);
    return compteur;
}

int my_put_g(double nb, flags_t infos)
{
    int taille_g = 0;
    int count = 0;

    if ((long long int)nb < 0) {
        infos.before_nbr = "-";
        nb = -nb;
    }
    taille_g = 6 - nb_chiffre((long long int)nb);
    if (taille_g > 0){
        infos.precision = taille_g;
        count += my_put_double(nb, infos, 0);
    } else {
        infos.precision = 5;
        count += my_put_double_scientific(nb, infos, 0);
    }
    return count;
}
