/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday04-sacha.henneveux
** File description:
** my_putstr.c
*/
#include "my.h"
#include "mystruct.h"
#include <unistd.h>

int my_putstr(char const *message)
{
    write(1, message, my_strlen(message));
}
