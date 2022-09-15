NAME = push_swap
HEADER = push_swap.h
LIBFT = libft

SRC = main.c check.c error.c populate.c push_swap.c \
	push.c swap.c rotate.c rev_rotate.c stack.c radix.c \
	sort_three.c sort_four.c sort_five.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
CC = cc
RM = rm -f

$(NAME): $(OBJ)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT)/libft.a -o $(NAME)

all: $(NAME)

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJ)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
