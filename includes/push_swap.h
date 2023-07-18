/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:43:49 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:30:01 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include "../libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// Struct Node

typedef struct s_stack_node
{
	int					nbr;
	int					rank;
	int					nbr_moves_to_top;
	int					bf;
	int					bf_rank;
	int					bf_moves_to_top;
	int					cost;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}						t_stack_node;

// Push_Swap functions

int						main(int ac, char **av);

// Stack_node functions

void					ft_stack_init(char **av,
							t_stack_node **stack_a);
void					reset_bf(t_stack_node **stack);
t_stack_node			*ft_newnode(int nbr);
void					ft_addnode_back(t_stack_node **head,
							t_stack_node *node);
int						stack_size(t_stack_node *stack);
void					print_stack(t_stack_node *stack);
int						find_mid_value(t_stack_node *stack);
int						find_min_value(t_stack_node *stack);
int						find_max_value(t_stack_node *stack);
int						get_index(t_stack_node *stack, int nbr);
void					put_top_a(t_stack_node **stack_a, int i);
void					put_top_b(t_stack_node **stack_b, int i);
void					get_rank(t_stack_node **stack_a);
int						get_part_size(t_stack_node *stack);
int						*split_stack(t_stack_node *stack);
void					get_bf(t_stack_node **stack_a, t_stack_node **stack_b);
int						moves_to_top(t_stack_node **stack, int nbr);
void					update_cost(t_stack_node **stack_);
void					clear_stack(t_stack_node **stack);

// Check functions
void					check_duplicates(char **av);
void					check_non_integers(char **av);
void					check_limits(char **av);
void					check_errors(char **av);
bool					check_if_sorted(t_stack_node *stack_a);

// Allowed operations

void					sa(t_stack_node **stack_a);
void					sb(t_stack_node **stack_b);
void					ss(t_stack_node **stack_a, t_stack_node **stack_b);
void					ra(t_stack_node **stack_a);
void					rb(t_stack_node **stack_b);
void					rr(t_stack_node **stack_a, t_stack_node **stack_b);
void					rra(t_stack_node **stack_a);
void					rrb(t_stack_node **stack_b);
void					rrr(t_stack_node **stack_a, t_stack_node **stack_b);
void					pa(t_stack_node **stack_a, t_stack_node **stack_b);
void					pb(t_stack_node **stack_a, t_stack_node **stack_b);

// Auxiliary operation functions

void					reverse_rotate(t_stack_node **stack);
void					rotate(t_stack_node **stack);
void					swap(t_stack_node **stack);

// Sort Algorithms

void					sort_selector(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					sort_small_stack(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					sort_three_numbers(t_stack_node **stack_a);
void					sort_four_numbers(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					sort_five_numbers(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					sort_medium_stack(t_stack_node **stack_a,
							t_stack_node **stack_b);
int						calculate_mean(t_stack_node *stack);
void					find_best_buddy(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					update_moves_to_top(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					move_best_cost(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					last_rotate(t_stack_node **stack_a);

// Array functions

int						*stack_dup(t_stack_node *stack);
void					swap_arr(int *a, int *b);
int						partition(int *array, int start, int end);
void					quicksort(int *array, int start, int end);

#endif