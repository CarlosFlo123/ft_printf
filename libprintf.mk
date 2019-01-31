# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libprintf.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cflores- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/28 20:03:46 by cflores-          #+#    #+#              #
#    Updated: 2019/01/28 20:10:21 by cflores-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Where the library is located
L_PRINTF ?= .

# How is the library called
PRINTF_NAME := libftprintf.a

# Variables to link with ft_printf
PRINTF_LNK := -L $(L_PRINTF) -l ftprintf
PRINTF_INC := -I $(L_PRINTF)/includes
PRINTF_LIB := $(L_PRINTF)/$(PRINTF_NAME)

ifndef LIB_LNK
LIB_LNK :=
LIB_INC :=
endif

LIB_LNK += $(PRINTF_LNK)
LIB_INC += $(PRINTF_INC)
