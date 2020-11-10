/*
** Epitech PROJECT, 2018
** check
** File description:
** sokoban
*/

#include "../include/my.h"

int check_lose_loop(char **array, int i, int y, int nbr)
{
    if (array[i][y] == 'X') {
        if (array[i][y - 1] == '#' || array[i][y + 1] == '#')
            nbr += array[i + 1][y] == '#' || array[i - 1][y] == '#' ? 1 : 0;
        nbr = nbr;
        if (array[i + 1][y] == '#' || array[i - 1][y] == '#')
            nbr += array[i][y + 1] == '#' || array[i][y - 1] == '#' ? 1 : 0;
    }
    return (nbr);
}

int check_lose(char **array)
{
    int nbr = 0;

    for (int i = 0; array[i]; i++) {
        for (int y = 0; array[i][y]; y++) {
            nbr = check_lose_loop(array, i, y, nbr);
        }
    }
    if (nbr == compt_x(array))
        return (1);
    else
        return (0);
}

int check_victory(char *prev, char **map)
{
    char **comp;
    int ret = 1;

    comp = my_str_to_word_array(prev);
    for (int i = 0; comp[i]; i++) {
        for (int y = 0; comp[i][y]; y++)
            ret = comp[i][y] == 'O' && map[i][y] != 'X' ? 0 : ret;
    }
    return (ret);
}
