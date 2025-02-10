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

int remove_item(stack_t **top_item)
{
    stack_t trans;

    if ((*top_item) == NULL){
        return -1;
    }
    if ((*top_item)->next == NULL){
        free((*top_item));
        (*top_item) = NULL;
        return 0;
    }
    trans = (*(*top_item)->next);
    free((*top_item)->next);
    (**top_item) = trans;
    return 0;
}
