NAME = push_swap
HEADER = push_swap.h
LIBFT = libft

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
CC = cc
RM = rm -f

$(NAME): $(OBJ)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT)/libft.a -o $(NAME)

all: $(NAME)

run:
	./$(NAME)

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJ)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re