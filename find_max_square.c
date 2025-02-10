/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** find_max_square.c
*/

#include "include/struct.h"
#include "include/other_libs.h"
#include <stdlib.h>
#include <stdio.h>

int *array_int;

static int mini(int a, int b)
{
    if (a < b){
        return a;
    } else {
        return b;
    }
}

static void compare(stack_p_t *stack, int i,
    struct max_square_info *max_square, int_array_t nbrs)
{
    int min = mini((((int *)(stack->data))[1] - i) +
    ((int *)(stack->data))[0], nbrs.array[((int *)(stack->data))[1]]);

    if (min > (*max_square).max){
        (*max_square).max = min;
        (*max_square).cordo = i + 1;
        (*max_square).max_y = (*max_square).y;
    } else if (min == (*max_square).max &&
    (*max_square).y <= (*max_square).max_y &&
    i + 1 < (*max_square).cordo){
            (*max_square).cordo = i + 1;
            (*max_square).max_y = (*max_square).y;
    }
}

static void last_collone(int_array_t nbrs,
    stack_p_t *stack, int i, struct max_square_info *max_square)
{
    while (stack != NULL){
        compare(stack, i, max_square, nbrs);
        remove_item_p(&stack);
    }
}

static void add_item_double_int(stack_p_t **stack, int diff, int indice)
{
    add_item_p(stack, array_int, sizeof(2 * sizeof(int)));
    ((int *)((*stack)->data))[0] = diff;
    ((int *)((*stack)->data))[1] = indice;
}

void find_max_square(int_array_t nbrs, struct max_square_info *max_square)
{
    int i = nbrs.len - 2;
    stack_p_t *stack = NULL;
    int difference = 0;

    (*max_square).y++;
    add_item_double_int(&stack, 0, nbrs.len - 1);
    for (; i >= 0; i--){
        difference = 0;
        while (stack != NULL &&
        nbrs.array[i] <= nbrs.array[((int *)(stack->data))[1]]){
            compare(stack, i, max_square, nbrs);
            difference += ((int *)(stack->data))[0] + 1;
            remove_item_p(&stack);
        }
        add_item_double_int(&stack, difference, i);
    }
    last_collone(nbrs, stack, i, max_square);
}
