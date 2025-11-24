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
	rm -rf $(OBJ)

fclean: clean 
	rm -rf $(NAME)

re: fclean all

