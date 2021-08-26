# -*- Makefile -*-

NAME := do-op
CC := gcc
CFLAGS := -Wall -Werror -Wextra -c
OFLAGS := -Wall -Werror -Wextra -o
SRC_DIR := ./srcs/
SRC_FILES := ft_atoi.c \
			ft_calc.c \
			ft_putnbr.c \
			operations.c \
			main.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))

all: $(NAME)

$(OBJ_FILES): $(SRC_FILES)
	$(CC) $(CFLAGS) $<

$(NAME): $(OBJS)
	$(CC) $(OFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
