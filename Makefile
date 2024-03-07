NAME=libft.a
CC=cc
CFLAGS=-Wall -Wextra -Werror

SRC_FILES = $(wildcard *.c)
OBJ_FILES = $(SRC_FILES:.c=.o)


all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	-rm -f $(NAME)

re: fclean all
