/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** mylist.h
*/

#include <sys/stat.h>
#include <dirent.h>


#ifndef STACK
    #define STACK
typedef struct stack {
    int data;
    struct stack *next;
    int level;
} stack_t;

typedef struct stack_p {
    void *data;
    struct stack_p *next;
    int level;
} stack_p_t;

#endif
