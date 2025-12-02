COMP = cc
FLAG = -Wall -Wextra -Werror
NAME = libftprintf.a
FUNCTIONS = 




OBJ = $(FUNCTIONS:.c=.o)

.c.o: 
	$(COMP) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

re: fclean all

