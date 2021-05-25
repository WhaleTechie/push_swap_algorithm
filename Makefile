NAME = push_swap

HEADER = includes/push_swap.h
CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRC = cub3d.c\
 mlx.c\
 keys_actions.c\
 render.c\
 draw.c\
 sprites.c\
 ray_config.c\
 parsing/parser.c\
 parsing/parser_res.c\
 parsing/parser_rgb.c\
 parsing/parser_tex.c\
 parsing/parser_map.c\
 parsing/parser_mapcheck.c\
 parsing/parser_spr.c\
 error_n_free.c\
 bmp_file.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

LIB = $(LIB_DIR)libft.a

LIB_DIR = libft/

$(LIB): FORCE
	$(MAKE) -C $(LIB_DIR)

$(NAME): $(LIB) $(MLX) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ -lft -L$(LIB_DIR) \

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR) -I$(LIB_DIR)

clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIB_DIR) $@

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIB)

re: fclean all

FORCE: