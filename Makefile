# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 19:44:56 by zali              #+#    #+#              #
#    Updated: 2025/05/14 19:44:58 by zali             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FLAGS = -Wall -Werror -Wextra
SRC_DIR = src
SRC = ${SRC_DIR}/ft_helper.c ${SRC_DIR}/ft_print_base.c ${SRC_DIR}/ft_printf.c ${SRC_DIR}/ft_printf_utils.c ${SRC_DIR}/ft_strlen.c
OBJ = ${SRC:.c=.o}
INC = ./includes/
HEADER = ${INC}/ft_printf.h
NAME = libftprintf.a

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

%.o: %.c ${HEADER}
	cc ${C_FLAGS} -c -I${INC} $< -o $@

clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all fclean clean re
