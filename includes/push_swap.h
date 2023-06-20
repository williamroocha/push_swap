/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:43:49 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/20 16:39:53 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// Struct Node

typedef struct s_stack_node
{
	int					nbr;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}						t_stack_node;

// Push_Swap functions

int						main(int ac, char **av);

// Stack_node functions

void					ft_stack_init(char **av,
							t_stack_node **stack_a);
t_stack_node			*ft_newnode(int nbr);
void					ft_addnode_back(t_stack_node **head,
							t_stack_node *node);
int						stack_size(t_stack_node *stack);
bool					a_is_sorted(t_stack_node *stack_a);
void					print_stack(t_stack_node *stack);
int						find_min_value(t_stack_node *stack);
int						find_max_value(t_stack_node *stack);
int						calculate_mean(t_stack_node *stack);

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

// Sort Algorithms

void					sort_small_stack(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					sort_three_numbers(t_stack_node **stack_a);
void					sort_four_numbers(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					brute_compare(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					sort_five_numbers(t_stack_node **stack_a,
							t_stack_node **stack_b);
void					sort_big_stack(t_stack_node **stack_a,
							t_stack_node **stack_b);

// Brute moves for sort_small_stack

void					case_1(t_stack_node **stack_a, t_stack_node **stack_b);
void					case_2(t_stack_node **stack_a, t_stack_node **stack_b);
void					case_3(t_stack_node **stack_a, t_stack_node **stack_b);

#endif