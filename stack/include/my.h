/*
** EPITECH PROJECT, 2024
** temp_setting_up
** File description:
** my.h
*/
#include "my_stack.h"

#ifndef MYS
    #define MYS
stack_t *add_item(stack_t **top_item, int value);
int remove_item(stack_t **top_item);
int add_item_p(stack_p_t **top_item, void *value, int size);
int remove_item_p(stack_p_t **top_item);

#endif
