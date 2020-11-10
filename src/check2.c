/*
** EPITECH PROJECT, 2018
** check 2
** File description:
** map sokoban
*/

#include "../include/my.h"

void switch_elem2(char map, int *elem)
{
    switch (map) {
    case ' ' :
        break;
    case '\n' :
        break;
    case '#' :
        break;
    case '\0' :
        break;
    default :
        exit(84);
    }
}

void switch_elem(char *map, int *elem)
{
    for (int i = 0; map[i]; i++) {
        switch (map[i]) {
        case 'P':
            elem[0] = elem[0] + 1;
            break;
        case 'O' :
            elem[1] = elem[1] + 1;
            break;
        case 'X' :
            elem[2] = elem[2] + 1;
            break;
        default :
            switch_elem2(map[i], elem);
        }
    }
}

int check_map(char *map)
{
    int *elem = malloc(sizeof(int) * 3);

    elem[0] = 0;
    elem[1] = 0;
    elem[2] = 0;
    switch_elem(map, elem);
    if (elem[0] != 1 || elem[1] != elem[2])
        return (84);
    else
        return (0);
}
