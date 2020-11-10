/*
** EPITECH PROJECT, 2018
** run game
** File description:
** sokoban
*/

#include "../include/my.h"

void clear_page(int rien)
{
    clear();
    refresh();
}

int resize_game(char **map, int add, int sous)
{
    char *error = "Make the window taller";
    float len_error = my_strlen(error);

    for (int i = 0; map[i]; i++) {
        mvprintw((LINES / 2) - add - 1, (COLS / 2) - (sous / 2), map[i]);
        while ((LINES - add) < add - 1 || COLS < sous) {
            clear();
            mvprintw((LINES / 2), (COLS / 2) - (len_error / 2), error);
            refresh();
        }
        add--;
    }
}
