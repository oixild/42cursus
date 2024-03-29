# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 16:15:04 by dsabater          #+#    #+#              #
#    Updated: 2023/10/20 13:25:21 by dsabater         ###   ########.fr        #
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

NAME = push_swap

SRCS =	push_swap.c args_error_control.c ps_utils.c \
		index_stack.c quick_sort.c radix_sort.c \
		ft_node_stack.c movement_operations.c \
		movement_operations2.c movement_operations3.c \
		quick_sort_extralines.c

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./libft

all: $(NAME)

$(NAME): $(OBJS) Makefile
	make -C libft
	$(CC) $(CFLAGS) -g -o $(NAME) $(OBJS) libft/libft.a
	@echo "$(GREEN)$(NAME) compiled$(DEFAULT)"

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

clean:
	make -C libft clean
	$(RM) $(OBJS)
	@echo "$(YELLOW)Cleaned up .o files$(DEFAULT)"

fclean: clean
	make -C libft fclean
	$(RM) $(NAME)
	@echo "$(RED)Removed executable: $(NAME)$(DEFAULT)"

re: fclean all


.PHONY: clean all fclean re
