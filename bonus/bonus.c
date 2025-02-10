// /*
// ** EPITECH PROJECT, 2024
// ** B-CPE-110-LYN-1-1-settingup-pierre.riss
// ** File description:
// ** find_max_square.c
// */

// #include "../include/struct.h"
// #include "../include/other_libs.h"
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>

// // array_int = {};

// int BONUS_mini(int a, int b)
// {
//     if (a < b){
//         return a;
//     } else {
//         return b;
//     }
// }

// int BONUS_compare(int BONUS_mini, int i, struct max_square_info *max_square)
// {
//     if (BONUS_mini > (*max_square).max){
//         (*max_square).max = BONUS_mini;
//         (*max_square).cordo = i + 1;
//         (*max_square).max_y = (*max_square).y;
//     } else if (BONUS_mini == (*max_square).max){
//         if ((*max_square).y < (*max_square).max_y && i + 1 < (*max_square).cordo){
//             (*max_square).cordo = i + 1;
//             (*max_square).max_y = (*max_square).y;
//         }
//     }
// }

// void BONUS_selected_colonnne(struct info_visu *infos, int i)
// {
//     if (infos->j <= infos->mini && infos->nbrs_i < i 
//     && infos->nbrs_i + infos->mini >= i) {
//         my_printf("\033[1;32m▪\033[0m");
//     }
//      else {
//         my_printf("▪");
//     }
// }

// void BONUS_ligne_hitorigrame(struct info_visu *infos)
// {
//     for (int i = 0; i < infos->nbrs.len; i++){
//         if (infos->j <= infos->nbrs.array[i]){
//             BONUS_selected_colonnne(infos, i);
//         } else {
//             my_printf(" ");
//         }
//     }
//     my_printf("\n");
// }

// void BONUS_affichage(struct info_visu *infos)
// {
//     int max_hitorigrame = 0;
//     system("clear");
//     for (int i = 0; i < infos->nbrs.len; i++){
//         if (infos->nbrs.array[i] > max_hitorigrame){
//             max_hitorigrame = infos->nbrs.array[i];
//         }
//     }
//     for (int j = max_hitorigrame; j > 0; j--){
//         my_printf("X");
//         infos->j = j;
//         BONUS_ligne_hitorigrame(infos);
//     }
//     for (int j = - 1; j < infos->nbrs.len; j++){
//         if (j == infos->nbrs_i){
//             my_printf("\033[1;31m▪\033[0m");
//         } else {
//             my_printf("\033[1;30m▪\033[0m");
//         }
//     }
//     my_printf("\033[?25l");
//     usleep(40000);
//     my_printf("\n");
// }
// void BONUS_BONUS_affichage_pile(stack_t *stack)
// {
//     for(stack_t *temp = stack; temp != NULL ; temp = temp->next ){
//         my_printf("%i  |", temp->data);
//     }
//     my_printf("\n");
// }

// void BONUS_last_collone(stack_t *stack, int i, struct max_square_info *max_square, struct info_visu *infos)
// {
//     int level = 0;
//     infos->nbrs_i = infos->nbrs_i - 1;

//     while (stack != NULL){
//         level++;
//         infos->mini = BONUS_mini(level, stack->data);
//         BONUS_affichage(infos);
//         BONUS_compare(BONUS_mini(level, stack->data), i, max_square);
//         remove_item(&stack);
//     }
// }

// void BONUS_find_max_square(int_array_t nbrs, struct max_square_info *max_square)
// {
//     int i = nbrs.len-2;
//     stack_t *stack = NULL;
//     int level = 0;
//     struct info_visu *infos = malloc(sizeof(struct info_visu));

//     infos->nbrs = nbrs;
//     (*max_square).y++;
//     add_item(&stack, nbrs.array[nbrs.len-1]);
//     infos->nbrs_i = i + 1;
//     infos->mini = 0;
//     infos->j = 0;
//     infos->search_square;
//     BONUS_affichage(infos);
//     for (; i >= 0; i--){
//         infos->nbrs_i = i;
//         infos->mini = 0;
//         level = 0;
//         BONUS_affichage(infos);
//         while (stack != NULL && nbrs.array[i] > stack->data){
//             level++;
//             infos->mini = BONUS_mini(level, stack->data);
//             BONUS_affichage(infos);
//             BONUS_compare(BONUS_mini(level, stack->data), i, max_square);
//             remove_item(&stack);
//         }
//         add_item(&stack, nbrs.array[i]);
//     }
//     BONUS_last_collone(stack, i, max_square, infos);
//     my_printf("\033[?25h");
// }
