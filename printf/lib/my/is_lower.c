/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-rush2-sacha.henneveux
** File description:
** is_lower.c
*/

int is_lower(char c)
{
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}
