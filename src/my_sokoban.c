/*
** EPITECH PROJECT, 2018
** my sokoban
** File description:
** game
*/

#include "../include/my.h"

int show_person_line(char **map)
{
    int ret = 0;

    for (int j = 0; map[j]; j++) {
        for (int i = 0; map[j][i]; i++)
            ret = map[j][i] == 'P' ? j : ret;
    }
    return (ret);
}

int show_person_col(char **map)
{
    int ret = 1;

    for (int j = 0; map[j]; j++) {
        for (int i = 0; map[j][i]; i++)
            ret = map[j][i] == 'P' ? i : ret;
    }
    return (ret);
}

void direction(int key, int pos[2], char **map)
{
    switch (key) {
    case KEY_UP :
        up(pos, map);
        break;
    case KEY_DOWN :
        down(pos, map);
        break;
    case KEY_LEFT :
        left(pos, map);
        break;
    case KEY_RIGHT :
        right(pos, map);
        break;
    }
}

int loop_game(char *prev_map, int pos[2], int line)
{
    int arr[3];
    char **map = my_str_to_word_array(prev_map);

    arr[0] = get_size_line(map[0]);
    while (1) {
        arr[2] = line / 2;
        pos[0] = show_person_line(map);
        pos[1] = show_person_col(map);
        if (check_victory(prev_map, map) == 1)
            return (0);
        else if (check_lose(map) == 1)
            return (1);
        resize_game(map, arr[2], arr[0]);
        arr[1] = getch();
        if (arr[1] == ' ')
            map = my_str_to_word_array(prev_map);
        direction(arr[1], pos, map);
        clear_page(line);
    }
}

int my_sokoban(char *prev_map, int nbr, int pos[2], int line)
{
    int ret;

    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);
    ret = loop_game(prev_map, pos, line);
    return (ret);
}
