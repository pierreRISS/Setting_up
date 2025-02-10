/*
** EPITECH PROJECT, 2024
** temp_setting_up
** File description:
** my.h
*/
#include "mylist.h"

#ifndef MYS
    #define MYS
linked_list_t *create_node(void *value);
linked_list_t *my_params_to_list(int ac, char *const *av);
void my_rev_list(linked_list_t **begin);
linked_list_t *add_node(linked_list_t *begin, void **value);
int my_list_size(linked_list_t *begin);

#endif
