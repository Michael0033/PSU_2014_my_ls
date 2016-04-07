##
## Makefile for Exo01 in /home/besnai_m/rendu/day11/lib/my
## 
## Made by michael besnainou
## Login   <besnai_m@epitech.net>
## 
## Started on  Mon Oct 20 10:11:47 2014 michael besnainou
## Last update Sun Nov 30 22:44:40 2014 michael besnainou
##

SRC	= lib/my/my_getnbr.c \
	lib/my/my_putchar.c \
	lib/my/my_put_nbr.c \
	lib/my/my_putstr.c \
	lib/my/my_strlen.c \

SRCS	= my_ls.c \
	my_ls_end.c \

NAME	= libmy.a

OBJ	= $(SRC:.c=.o)

OBJS	= $(SRCS:.c=.o)

FILE	= my_ls

RM	= rm -f

CC	= gcc

CP	= cp

CFLAGS	= -Wall -Wextra -Werror -ansi -pedantic


all: $(NAME) $(FILE)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(FILE): $(OBJS)
	$(CC) -o $(FILE) $(OBJS) $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(FILE)

re: fclean all

.PHONY: all clean fclean re
