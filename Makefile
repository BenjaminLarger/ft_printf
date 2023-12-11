SRC = $(wildcard *.h */*.c)
OBJ = $(SRC:%.c=%.o)
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(CFLAGS)

clean:
	$(RM) $(SRC) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all