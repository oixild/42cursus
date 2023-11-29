# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 08:58:06 by dsabater          #+#    #+#              #
#    Updated: 2023/11/29 10:54:12 by dsabater         ###   ########.fr        #
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

MLXFLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./libft
MINILIB = mlx/libmlx.a

all: subsystem $(NAME)


$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) -g $(MLXFLAGS) $(OBJS) libft/libft.a mlx/libmlx.a -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled$(DEFAULT)"

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -Ilmx -c -o $@ $<

subsystem :
		make -C libft all
		make -C mlx/ all

clean:
	make -C libft clean
	make -C mlx/ clean
	$(RM) $(OBJS)
	@echo "$(YELLOW)Cleaned up .o files$(DEFAULT)"

fclean: clean
	make -C libft fclean
	make -C mlx/ clean
	$(RM) $(NAME)
	@echo "$(RED)Removed executable: $(NAME)$(DEFAULT)"

re: fclean all


.PHONY: clean all fclean re

	printf "\n\n                 ░░░░░░░░░   ░░░░░░░░░░░░░░░░\n               ░░░░░░░░░     ░░░░░░  ░░░░░░░░\n             ░░░░░░░░░       ░░░░     ░░░░░░░\n           ░░░░░░░░░         ░░      ░░░░░░░\n         ░░░░░░░░░                  ░░░░░░░░\n       ░░░░░░░░░                  ░░░░░░░░\n     ░░░░░░░░░                  ░░░░░░░░\n   ░░░░░░░░░░░░░░░░░░░░░░     ░░░░░░░░     ░░\n   ░░░░░░ $$(whoami) ░░░░░░░   ░░░░░░░░    ░░░░\n   ░░░░░░░ pacman ░░░░░░░░   ░░░░░░░░  ░░░░░░\n   ░░░░░░░░░░░░░░░░░░░░░░░   ░░ Barcelona ░░░\n                  ░░░░░░░░   ░░░░░░░░░░░░░░░░\n                  ░░░░░░░░      |\n                  ░░░░░░░░      ╰┈➤$(NAME) \n                  ░░░░░░░░\n";
