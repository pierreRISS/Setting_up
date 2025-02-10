/*
** EPITECH PROJECT, 2024
** temp_setting_up
** File description:
** add_item.c
*/

#include "stdlib.h"
#include "include/my_stack.h"
#include "../lib/my/libmy.h"
#include <stdio.h>

int add_item_p(stack_p_t **top_item, void *value, int size)
{
    stack_p_t new_item;

    new_item.data = malloc(size);
    if ((*top_item) == NULL){
        new_item.next = NULL;
        new_item.level = 0;
        (*top_item) = malloc(sizeof(stack_p_t));
        (**top_item) = new_item;
        return 0;
    }
    new_item.next = malloc(sizeof(stack_p_t));
    (*new_item.next) = (**top_item);
    new_item.level = (*top_item)->level + 1;
    (**top_item) = new_item;
    return 0;
}
