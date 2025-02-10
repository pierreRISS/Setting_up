/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-sacha.henneveux
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}
