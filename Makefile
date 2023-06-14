NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = src/operations/push_functions.c
	src/operations/rotate_functions.c
	src/operations/swap_functions.c
	src/operations/reverse_rotate_functions.c
	src/sort/sort_three_numbers.c
	src/sort/sort_five_numbers.c
	src/sort/sort_hundred_numbers.c
	src/sort/sort_five_hundred_numbers.c
	src/utils/a_is_sorted.c
	src/utils/ft_addnode_back.c
	src/utils/ft_newnode.c
	src/utils/ft_atoi.c
	src/utils/ft_stack_init.c
	src/utils/ft_stack_size.c
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