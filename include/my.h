/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** sokoban
*/

#ifndef MY_H_
# define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>

int loop_game(char *prev_map, int pos[2], int line);
int compt_x(char **array);
int check_lose(char **array);
int check_map(char *map);
int check_victory(char *prev, char **map);
int alloc(char **av);
int load_map(char *av, char *str);
void put_help(int rien);
char *put_backline(char *str, int i);
void up(int pos[2], char **map);
void down(int pos[2], char **map);
void left(int pos[2], char **map);
void right(int pos[2], char **map);
int show_person_line(char **map);
int show_person_col(char **map);
int get_nbr_lines(char **map);
int get_size_line(char *map);
void direction(int key, int pos[2], char **map);
int my_sokoban(char *prev_map, int nbr, int pos[2], int line);
void clear_page(int rien);
int resize_game(char **map, int add, int sous);
void my_putchar(char c);
void my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
char **my_str_to_word_array(char *str);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);

#endif /* !MY_H_ */
