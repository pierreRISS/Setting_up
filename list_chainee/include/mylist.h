/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** mylist.h
*/

#include <sys/stat.h>
#include <dirent.h>

#ifndef MYLIST
    #define MYLIST
typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

#endif
