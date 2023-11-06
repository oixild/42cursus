# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 08:58:06 by dsabater          #+#    #+#              #
#    Updated: 2023/11/06 12:12:16 by dsabater         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color Aliases
DEFAULT = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

HEADER = inc/so_long.h

NAME = so_long

SRCS = src/main.c

OBJS = $(SRCS:.c=.o)

MLXFLAGS = -Lminlib -lmlx -framework OpenGL -framework AppKit
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./libft
MINILIB = minlib/mlx.a

all: subsystem $(NAME)

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) -g $(OBJS) libft/libft.a $(MLXFLAGS) $(MINILIB) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled$(DEFAULT)"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c -o -Imlx $@ $<

subsystem :
		make -C libft
		make -C minlib

clean:
	make -C libft clean
	make -C minlib clean
	$(RM) $(OBJS)
	@echo "$(YELLOW)Cleaned up .o files$(DEFAULT)"

fclean: clean
	make -C libft fclean
	make -C minlib clean
	$(RM) $(NAME)
	@echo "$(RED)Removed executable: $(NAME)$(DEFAULT)"

re: fclean all


.PHONY: clean all fclean re
