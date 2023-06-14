NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = src/operations/*.c\
	src/utils/*.c\
	src/push_swap.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "push_swap compiled"

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "push_swap object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "push_swap removed"

re: fclean all

.PHONY: clean fclean all re