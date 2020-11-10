##
## EPITECH PROJECT, 2018
## makefile
## File description:
## .o 
##

SRC	=	src/check.c	\
		src/check2.c	\
		utils/mem_alloc_2d_array.c	\
		src/move.c	\
		src/get.c	\
		utils/my_putchar.c	\
		utils/my_putstr.c	\
		utils/my_put_nbr.c	\
		src/my_sokoban.c	\
		utils/my_strlen.c	\
		utils/my_str_to_word_array.c	\
		utils/resize_game.c	\
		utils/fonc_util.c

NAME	=	my_sokoban

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) main.c $(OBJ) -lcurses

clean:
	rm -rf $(OBJ)
fclean:		clean
	rm -rf $(NAME)

re:	fclean all
