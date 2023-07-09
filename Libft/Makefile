NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")


all: $(NAME)

$(NAME):
	cc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
clean:
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
