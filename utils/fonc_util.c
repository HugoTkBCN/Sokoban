/*
** EPITECH PROJECT, 2018
** fonction util
** File description:
** my sokoban
*/

#include "../include/my.h"

int alloc(char **av)
{
    int fd = open(av[1], O_RDONLY);
    int size = 1;
    char buffer[1];
    int count = 0;

    if (fd == -1)
        return (84);
    for (count = 0; size != 0; count++)
        size = read(fd, buffer, 1);
    close(fd);
    return (count);
}

int load_map(char *av, char *str)
{
    int fd = open(av, O_RDONLY);
    int size = 1;
    char buffer[1];
    int line = 0;

    if (fd == -1)
        return (84);
    for (int i = 0; size != 0; i++) {
        size = read(fd, buffer, 1);
        if (buffer[0] == '\n')
            line++;
        str[i] = buffer[0];
    }
    close(fd);
    return (line);
}

char *put_backline(char *str, int i)
{
    if (str[i - 1] != '\n')
        str[i - 1] = '\n';
    return (str);
}

int compt_x(char **array)
{
    int nbr = 0;

    for (int j = 0; array[j]; j++) {
        for (int i = 0; array[j][i]; i++) {
            nbr = array[j][i] == 'X' ? nbr + 1 : nbr;
        }
    }
    return (nbr);
}
