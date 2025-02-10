/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** my_rev_list.c
*/

#include "stdlib.h"
#include "include/mylist.h"
#include "../lib/my/libmy.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *nouveau_mailon;
    linked_list_t *save_mailon;
    linked_list_t *mailon = (*begin);

    save_mailon = malloc(sizeof(linked_list_t));
    save_mailon->next = NULL;
    save_mailon->data = mailon->data;
    mailon = mailon->next;
    for (; mailon != NULL; mailon = mailon->next){
        nouveau_mailon = malloc(sizeof(linked_list_t));
        nouveau_mailon->data = mailon->data;
        nouveau_mailon->next = save_mailon;
        save_mailon = nouveau_mailon;
    }
    (*begin) = nouveau_mailon;
}
