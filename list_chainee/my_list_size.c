/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** my_list_size.c
*/

#include "stdlib.h"
#include "include/mylist.h"
#include "../lib/my/libmy.h"

int my_list_size(linked_list_t *begin)
{
    linked_list_t mailon;
    int i = 0;

    for (linked_list_t *mailon = begin; mailon->next != NULL;
        mailon = mailon->next) {
        i++;
    }
    return i;
}
