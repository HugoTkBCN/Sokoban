/*
** EPITECH PROJECT, 2018
** str to word array
** File description:
** task04
*/

#include "../include/my.h"

int *get_row_col(char *str, int *row_col)
{
    row_col = malloc(sizeof(int) * 3);
    row_col[0] = 0;
    row_col[1] = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '\n')
            row_col[0]++;
        else {
            row_col[1] = str[i - 1] == '\n' ? 0 : row_col[1];
            row_col[1]++;
        }
    }
    return (row_col);
}

char **my_str_to_word_array(char *str)
{
    int *row_col = get_row_col(str, row_col);
    char **word_array = mem_alloc_2d_array(row_col[0], row_col[1]);
    int j = 0;
    int v = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            word_array[j][v] = '\0';
            j++;
            v = 0;
        } else if (str[i] != '\n')
            word_array[j][v++] = str[i];
    }
    word_array[j] = '\0';
    return (word_array);
}
