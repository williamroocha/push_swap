NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror -fsanitize=address
SRC_DIR = src
OBJ_DIR = obj

SRC = $(addprefix $(SRC_DIR)/operations/, \
	push_functions.c \
	rotate_functions.c \
	reverse_rotate_functions.c \
	swap_functions.c \
) \
$(addprefix $(SRC_DIR)/sort/, \
	calculate_mean.c \
	put_top.c \
	update_cost.c \
	find_best_buddy.c \
	sort_medium_stack.c \
	update_moves_to_top.c \
	last_rotate.c \
	sort_selector.c \
	move_best_cost.c \
	sort_small_stack.c \
) \
$(addprefix $(SRC_DIR)/utils/, \
	clear_stack.c \
	ft_addnode_back.c \
	get_index.c \
	sort_array.c \
	find_max_value.c \
	ft_newnode.c \
	get_rank.c \
	stack_dup.c \
	find_min_value.c \
	ft_stack_init.c \
	moves_to_top.c \
	stack_size.c \
) \
$(addprefix $(SRC_DIR)/check_functions/, \
	check_duplicates.c \
	check_if_sorted.c \
	check_non_integers.c \
	check_errors.c \
	check_limits.c \
) \
$(SRC_DIR)/push_swap.c

OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_INC = $(LIBFT_DIR)/libft.h

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(FLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)
	@echo "push_swap compiled"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(LIBFT_INC)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory

clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_DIR) clean --no-print-directory
	@echo "push_swap object files removed"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean --no-print-directory
	@echo "push_swap removed"

re: fclean all

.PHONY: clean fclean all re
