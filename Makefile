# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cflores- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/28 15:23:51 by cflores-          #+#    #+#              #
#    Updated: 2019/01/31 10:16:45 by cflores-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include libprintf.mk

# directories
SRC_DIR  := ./src
INC_DIR  := ./includes
OBJ_DIR  := ./obj
TEST_DIR := ./test

# src / obj files
SRC		:= printf.c \
		   check.c \
		   format.c \
		   handle.c \
		   get_param.c \
		   replace.c \
		   write.c \
		   \
		   util/atoi.c \
		   util/itoa.c \
		   util/ft.c \
		   util/number.c \
		   \
		   handlers/percent.c \
		   handlers/char.c \
		   handlers/string.c \
		   handlers/hex.c

OBJ		:= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

# compiler
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
CFLAGS	+= -O3 -march=native -pipe

NAME	:= $(PRINTF_NAME)

# rules
all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/util
	mkdir -p $(OBJ_DIR)/handlers

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(LIB_INC) -o $@ -c $<

$(NAME): $(OBJ_DIR) $(OBJ)
	ar rc $(PRINTF_NAME) $(OBJ)
	ranlib $(PRINTF_NAME)

test:
	@$(MAKE) -C $(TEST_DIR) --no-print-directory

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(PRINTF_NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory

.PHONY: all clean fclean re relibs test
