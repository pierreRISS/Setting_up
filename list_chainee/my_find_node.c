/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** my_find_node.c
*/

#include "stdlib.h"
#include "include/mylist.h"
#include "../lib/my/libmy.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int(*f) (),
    void const *data_ref, int(*cmp) ())
{
    int i = 2;
    linked_list_t *mailon = begin;

    for (; mailon->next != 0; i++){
        if (((*cmp) (mailon->data, begin)) == 0){
            mailon->next = mailon->next->next;
        }
        mailon = mailon->next;
    }
    return i;
}
