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
	@echo "$(YELLOW)Cleaned up .o files$(DEFAULT)"

fclean: clean
	make -C libft fclean
	$(RM) $(NAME_SERVER) $(NAME_CLIENT)
	@echo "$(RED)Removed executables: $(NAME_SERVER) $(NAME_CLIENT)$(DEFAULT)"

re: fclean all

.PHONY: clean all fclean re
