/*
** EPITECH PROJECT, 2024
** temp_setting_up
** File description:
** add_node.c
*/

#include "stdlib.h"
#include "include/mylist.h"
#include "../lib/my/libmy.h"

linked_list_t *create_node(void *value)
{
    linked_list_t *mailon;

    mailon->data = value;
    mailon->next = 0;
    return mailon;
}
