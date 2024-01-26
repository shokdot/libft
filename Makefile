NAME = libft.a
SRC = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
RM = /bin/rm -f
C_FLAGS = -Wall -Wextra -Werror -c

all:$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:fclean all

%.o:%.c
	cc $(C_FLAGS) $< -o $@

.PHONY: all clean fclean re
