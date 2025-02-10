/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** nbr_selector
*/

int nbr_selector(const char *format, int *i)
{
    long int nbr = 0;

    for (; format[(*i)] != '\0'; (*i)++) {
        if (format[(*i)] >= 48 && format[(*i)] <= 57) {
            nbr *= 10;
            nbr += format[(*i)] - 48;
        } else {
            return (int)nbr;
        }
        if (nbr > 2147483647){
            return 0;
        }
    }
}
