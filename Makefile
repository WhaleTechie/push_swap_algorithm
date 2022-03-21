
NAME = push_swap

HEADER = includes/push_swap.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC = main.c\
utils.c\
parse.c\
push.c\
swap.c\
rotate.c\
reverse_rotate.c\
sorted.c\
solve_little.c\
main_algo.c\
optimise.c\
moves_instacks.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@  

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

FORCE:
