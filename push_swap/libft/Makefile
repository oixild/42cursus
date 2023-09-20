# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsabater <dsabater@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 16:08:52 by dsabater          #+#    #+#              #
#    Updated: 2023/06/12 17:18:01 by dsabater         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC =	ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strncmp.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSRC =	ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

HEADER = libft.h

OBJ = $(SRC:.c=.o)

OBJBONUS = $(BSRC:.c=.o)

all: $(NAME)

%.o: %.c $(HEADER)
	cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: .bonus

.bonus: $(OBJBONUS)
	ar rc $(NAME) $(OBJBONUS)
	@touch .bonus

clean:
	rm -f $(OBJ) $(OBJBONUS) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
