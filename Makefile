CC = cc
FLAG = -Wall -Wextra -Werror
NAME = libftprintf.a
FUNCTIONS = ft_pointer.c \
	ft_printf.c \
	ft_putchar.c \
	ft_puthex.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_unsigned.c

OBJ = $(FUNCTIONS:.c=.o)

.c.o: 
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all

