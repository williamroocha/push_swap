NAME = push_swap

CC = cc

FLAGS = -Wall -Wextra -Werror -fsanitize=address

SRC_DIR = src
OBJ_DIR = obj

SRC = $(wildcard $(SRC_DIR)/operations/*.c) \
	$(wildcard $(SRC_DIR)/sort/*.c) \
	$(wildcard $(SRC_DIR)/utils/*.c) \
	$(wildcard $(SRC_DIR)/check_functions/*.c) \
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
