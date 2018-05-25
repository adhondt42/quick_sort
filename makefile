# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhondt <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/22 21:33:32 by adhondt           #+#    #+#              #
#    Updated: 2018/05/25 17:06:33 by adhondt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc

FLAGS =  -Wall -Wextra -Werror

CPP_FLAGS = -Iinclude

NAME = quick_sort

SRC_PATH = ./src
LIB_PATH = ./lib
INC_PATH = ./inc
OBJ_PATH = ./obj
OBJLIB_PATH = ./obj

SRC_NAME =	main.c pivot_tools.c \

LIB_NAME = 	swap_int.c ft_atoi.c ft_intnew.c ft_putinttab.c ft_putnbr.c \
			ft_putchar.c ft_putstr.c ft_strlen.c \

INC_NAME = quick_sort.h

OBJ_NAME = $(SRC_NAME:.c=.o)
OBJLIB_NAME = $(LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
LIB = $(addprefix $(LIB_PATH)/, $(LIB_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJLIB = $(addprefix $(OBJLIB_PATH)/,$(OBJLIB_NAME))

all: $(NAME)

$(NAME): $(OBJ) $(OBJLIB)
	@$(CC) $(FLAGS) $(OBJ) $(OBJLIB) -o $(NAME)
	@echo "\033[1;34mQuick_sort\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(FLAGS) -o $@ -c $<

$(OBJLIB_PATH)/%.o: $(LIB_PATH)/%.c
	@mkdir $(OBJLIB_PATH) 2> /dev/null || true
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ) $(OBJLIB)
	@echo "\033[1;34mQuick_sort\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf ./obj $(NAME)
	@echo "\033[1;34mQuick_sort\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all
.PHONY: all clean fclean re
