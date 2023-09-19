# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 12:04:40 by dsabater          #+#    #+#              #
#    Updated: 2023/09/04 16:45:12 by dsabater         ###   ########.fr        #
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


NAME = libftprintf.a

SRCS =	ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c \
		ft_itoa.c ft_puthex.c ft_utoa.c ft_strcpy.c \

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) compiled$(DEFAULT)"

clean:
	$(RM) $(OBJS)
	@echo "$(YELLOW)Cleaned up .o files$(DEFAULT)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)Removed executable: $(NAME)$(DEFAULT)"

re: fclean all


.PHONY: clean all fclean re
