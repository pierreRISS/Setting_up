/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday08-pierre.riss
** File description:
** my_str_to_word_array.c
*/

#include <stdlib.h>
#include "libmy.h"
#include <malloc.h>

int is_in(char x)
{
    char *compare = "\n`~$^+=<>“!@#&()[ {}]:;',.?/*\0";

    for (int i = 0; compare[i] != '\0'; i++){
        if (x == compare[i]){
            return 1;
        }
    }
    return 0;
}

char *my_strcat1(char *dest, char const src)
{
    int i = my_strlen(dest);

    dest[i] = src;
    dest[i + 1] = '\0';
    return dest;
}

int nbr_world(char const *str)
{
    int total = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (is_in(str[i]) == 1){
            total++;
        }
        i++;
    }
    total +1;
    return total;
}

char *my_copy(int len, char const *str, int i)
{
    char *result = malloc(len +2);
    char save[] = " ";

    for (int j = i - len -1; j < i; j++){
        my_strcat1(result, str[j]);
    }
    return result;
}

char **my_str_to_word_array(char const *str)
{
    int i = 1;
    int i_tab = 0;
    int len = 0;
    char **tab = malloc(nbr_world(str));

    for (; str[i] != '\0'; i++){
        if (is_in(str[i]) == 1 && (is_in(str[i - 1]) == 0)){
            tab[i_tab] = malloc(len);
            tab[i_tab] = my_copy(len, str, i);
            i_tab++;
            len = 0;
        }
        if ((is_in(str[i - 1]) == 0 && is_in(str[i]) == 0)){
            len++;
        }
    }
    tab[i_tab] = malloc(len);
    tab[i_tab] = my_copy(len, str, i);
    return tab;
}
