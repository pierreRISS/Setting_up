/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** my_params_to_list.c
*/

#include "stdlib.h"
#include "include/mylist.h"
#include "../lib/my/libmy.h"

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *liste_chaine;
    linked_list_t *pointeur = 0;

    for (int i = 0; i < ac; i++){
        liste_chaine = malloc(1);
        liste_chaine->data = malloc(my_strlen(av[i]) + 1);
        liste_chaine->data = av[i];
        liste_chaine->next = pointeur;
        pointeur = liste_chaine;
    }
    return liste_chaine;
}
