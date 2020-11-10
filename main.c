/*
** EPITECH PROJECT, 2018
** main
** File description:
** sokoban
*/

#include "include/my.h"

void put_help(int rien)
{
    my_putstr("USAGE\n");
    my_putstr("    ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("    map file representing the warehouse map, containing '#' ");
    my_putstr("for walls, \n        'P' for the player, ");
    my_putstr("X' for boxes and 'O' for storage locations.\n");
}

int check_flag(char **av, int ac, int nbr)
{
    if (ac != 2)
        exit(84);
    else if (av[1][0] == '-' && av[1][1] == 'h') {
        put_help(nbr);
        exit(0);
    } else {
        nbr = alloc(av);
        if (nbr == 84)
            exit(84);
        return (nbr);
    }
}

int main(int ac, char **av)
{
    char *map;
    int nbr;
    int pos[2];
    char **array;
    int line;
    int quit;

    nbr = check_flag(av, ac, nbr);
    map = malloc(sizeof(char *) * nbr + 1);
    line = load_map(av[1], map);
    map = put_backline(map, nbr);
    if (check_map(map) == 84)
        return (84);
    quit = my_sokoban(map, nbr, pos, line);
    endwin();
    free(map);
    return (quit);
}
