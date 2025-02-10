/*
** EPITECH PROJECT, 2024
** temp_setting_up
** File description:
** add_node.c
*/

#include "stdlib.h"
#include "include/mylist.h"
#include "../lib/my/libmy.h"

linked_list_t *add_node(linked_list_t *begin, void **value)
{
    linked_list_t *mailon = begin;
    linked_list_t *add = malloc(sizeof(linked_list_t));

    add->data = (*value);
    add->next = NULL;
    if (begin == NULL){
        return add;
    }
    for (; mailon->next != 0; mailon = mailon->next){
    }
    mailon->next = add;
    return begin;
}
