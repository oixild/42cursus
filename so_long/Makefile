# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 08:58:06 by dsabater          #+#    #+#              #
#    Updated: 2023/10/25 08:58:55 by dsabater         ###   ########.fr        #
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

NAME = so_long

SRCS =

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./libft

all: $(NAME)

$(NAME): $(OBJS) Makefile
	$(CC) $(CFLAGS) -g -o $(NAME) $(OBJS) libft/libft.a
	@echo "$(GREEN)$(NAME) compiled$(DEFAULT)"

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

clean:
	$(RM) $(OBJS)
	@echo "$(YELLOW)Cleaned up .o files$(DEFAULT)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)Removed executable: $(NAME)$(DEFAULT)"

re: fclean all


.PHONY: clean all fclean re