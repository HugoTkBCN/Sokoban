/*
** EPITECH PROJECT, 2018
** move2
** File description:
** suite move
*/

#include "../include/my.h"

void up(int pos[2], char **map)
{
    if (map[pos[0] - 1][pos[1]] == 'X' && map[pos[0] - 2][pos[1]] != '#') {
        if (map[pos[0] - 2][pos[1]] != 'X') {
            map[pos[0]][pos[1]] = ' ';
            map[pos[0] - 1][pos[1]] = 'P';
            map[pos[0] - 2][pos[1]] = 'X';
        }
    } else if (map[pos[0] - 1][pos[1]] == 'O') {
        map[pos[0]][pos[1]] = ' ';
        map[pos[0] - 1][pos[1]] = 'P';
    } else {
        if (map[pos[0] - 1][pos[1]] != '#' && map[pos[0] - 1][pos[1]] != 'X') {
            map[pos[0]][pos[1]] = ' ';
            map[pos[0] - 1][pos[1]] = 'P';
        }
    }
}

void down(int pos[2], char **map)
{
    if (map[pos[0] + 1][pos[1]] == 'X' && map[pos[0] + 2][pos[1]] != '#') {
        if (map[pos[0] + 2][pos[1]] != 'X') {
            map[pos[0]][pos[1]] = ' ';
            map[pos[0] + 1][pos[1]] = 'P';
            map[pos[0] + 2][pos[1]] = 'X';
        }
    } else if (map[pos[0] + 1][pos[1]] == 'O') {
        map[pos[0]][pos[1]] = ' ';
        map[pos[0] + 1][pos[1]] = 'P';
    } else {
        if (map[pos[0] + 1][pos[1]] != '#' && map[pos[0] + 1][pos[1]] != 'X') {
            map[pos[0]][pos[1]] = ' ';
            map[pos[0] + 1][pos[1]] = 'P';
        }
    }
}

void left(int pos[2], char **map)
{
    if (map[pos[0]][pos[1] - 1] == 'X' && map[pos[0]][pos[1] - 2] != '#') {
        if (map[pos[0]][pos[1] - 2] != 'X') {
            map[pos[0]][pos[1]] = ' ';
            map[pos[0]][pos[1] - 1] = 'P';
            map[pos[0]][pos[1] - 2] = 'X';
        }
    } else if (map[pos[0]][pos[1] - 1] == 'O') {
        map[pos[0]][pos[1]] = ' ';
        map[pos[0]][pos[1] - 1] = 'P';
    } else {
        if (map[pos[0]][pos[1] - 1] != '#' && map[pos[0]][pos[1] - 1] != 'X') {
            map[pos[0]][pos[1]] = ' ';
            map[pos[0]][pos[1] - 1] = 'P';
        }
    }
}

void right(int pos[2], char **map)
{
    if (map[pos[0]][pos[1] + 1] == 'X' && map[pos[0]][pos[1] + 2] != '#') {
        if (map[pos[0]][pos[1] + 2] != 'X') {
            map[pos[0]][pos[1]] = ' ';
            map[pos[0]][pos[1] + 1] = 'P';
            map[pos[0]][pos[1] + 2] = 'X';
        }
    } else if (map[pos[0]][pos[1] + 1] == 'O') {
        map[pos[0]][pos[1]] = ' ';
        map[pos[0]][pos[1] + 1] = 'P';
    } else {
        if (map[pos[0]][pos[1] + 1] != '#' && map[pos[0]][pos[1] + 1] != 'X') {
            map[pos[0]][pos[1]] = ' ';
            map[pos[0]][pos[1] + 1] = 'P';
        }
    }
}
