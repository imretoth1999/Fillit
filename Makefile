# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbardi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/20 12:03:00 by bbardi            #+#    #+#              #
#    Updated: 2017/01/23 12:30:30 by bbardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fillit 

SRC		= main.c \
		  reader.c \
		  tetrimino.c \
		  map.c \
		  solver.c

OBJ		= main.o \
		  reader.o \
		  tetrimino.o \
		  map.o \
		  solver.o

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

LIBFT	= ./libft/libft.a
LIBINC	= -I./libft
LIBLINK	= -L./libft -lft

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(LIBINC) -o $@ -c $<

libft: $(LIBFT)

$(LIBFT):
	make -C ./libft

$(NAME): libft $(OBJ)
	$(CC) $(LIBLINK) -o $(NAME) $(OBJ)

clean:
	rm -rf *.o
	make -C ./libft clean
fclean: 
	rm -rf *.o
	rm -rf $(NAME)
	make -C ./libft fclean
re: fclean all
