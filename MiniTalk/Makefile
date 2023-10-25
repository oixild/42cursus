# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 16:57:26 by dsabater          #+#    #+#              #
#    Updated: 2023/10/25 16:58:39 by dsabater         ###   ########.fr        #
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

NAME_SERVER = server
NAME_CLIENT = client

SRCS_SERVER = src/server.c
SRCS_CLIENT = src/client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER): $(OBJS_SERVER) Makefile
	make -C libft
	$(CC) $(CFLAGS) -o $(NAME_SERVER) $(OBJS_SERVER) libft/libft.a
	@echo "$(GREEN)$(NAME_SERVER) compiled$(DEFAULT)"

$(NAME_CLIENT): $(OBJS_CLIENT) Makefile
	make -C libft
	$(CC) $(CFLAGS) -o $(NAME_CLIENT) $(OBJS_CLIENT) libft/libft.a
	@echo "$(GREEN)$(NAME_CLIENT) compiled$(DEFAULT)"

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	make -C libft clean
	$(RM) $(OBJS_SERVER) $(OBJS_CLIENT)
	@echo "$(YELLOW)Cleaned up .o files from $(NAME_SERVER) and $(NAME_CLIENT) $(DEFAULT)"

fclean: clean
	make -C libft fclean
	$(RM) $(NAME_SERVER) $(NAME_CLIENT)
	@echo "$(RED)Removed executables: $(NAME_SERVER) and $(NAME_CLIENT)$(DEFAULT)"

re: fclean all

.PHONY: clean all fclean re
