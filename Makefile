FALGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c\
	ft_putnumber.c\
	ft_putword.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

%o: %c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
