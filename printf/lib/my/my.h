/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday09-sacha.henneveux
** File description:
** my.h
*/
#include "mystruct.h"
#include <stdarg.h>


#ifndef MY_H_
    #define MY_H_

int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
void my_showstr(char *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int nb_occurence(char **av);
int is_lower(char c);
int my_put_nbr_unsigned(unsigned int nb);
int nb_chiffre_unsigned(unsigned int nb);
int decimal_unsigned(int nb);
double static rounded(double nb, int after_coma);
char static *enleve_0(char *str);
char static *my_put_decimal(double nb, int after_coma);
int hexa_lower(unsigned long int nb);
double my_compute_lower_it(int nb, int p);
void nb_char_before(int *adress, int count);
int nb_chiffre(long long int nb);
int octal_flag(unsigned long int nb);
int pointer_flag(void *pointer);
int count_nb(long long int nb);
char *cut_str(char *str, int nb_char);
int put_space(int len, int taille);
int my_put_int_flags(flags_t infos, char *str);
int my_put_str_flags(flags_t infos, char *str);
int put_left_0_int(int len, int taille);
int put_left_space_str(int len, int taille);
int put_right_space(int len, int taille);
int my_printf(const char *format, ...);
int nbr_selector(const char *format, int *i);
int static show_double(double nb, flags_t infos, int print_0);
int my_put_double(double nb, flags_t infos, int print_0);
int count_print_nb(long long int nb, flags_t infos);
int my_put_double_flags(flags_t infos, char *value);
flags_t lenght_modifiers(list_spe_t *l, flags_t flags);
flags_t lenght_modifiers_two(list_spe_t *l, flags_t flags);
flags_t check_flag1(list_spe_t *l, flags_t flags);
int next_flag(list_spe_t l, va_list args, int *count, flags_t flags);
int mini_printf_flag(list_spe_t l, va_list args, int *count, flags_t flags);
int check_percent(list_spe_t l, va_list args, int *count, flags_t flags);
char *int_to_str(long long int nb);
long long int my_compute_power_rec(int nb, int p);
long long int type_int(flags_t infos, long long int value);
char *my_strcat(char *dest, char const *src);
char *char_to_str(char chara);
int hexa_upper(unsigned nb);
int modulable_conversion(flags_t infos, unsigned int nb, char *base_number);
int my_put_g(double nb, flags_t infos);
int my_put_double_scientific(double nb, flags_t infos, int maj);
char *put_percentage(int multiple, int maj);
char *base(int base, int maj);
int is_upper(char c);
char *char_to_str(char chara);


#endif
