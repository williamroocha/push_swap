/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/10 17:44:05 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	aux_sort(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	min_a;
	int	min_i;
	int	max_b;
	int	max_i;

	max_b = find_max_value(*stack_b);
	max_i = get_index(*stack_b, max_b);
	min_a = find_min_value(*stack_a);
	min_i = get_index(*stack_a, min_a);
	put_top_a(stack_a, min_i);
	put_top_b(stack_b, max_i);
	pa(stack_a, stack_b);
	if ((*stack_a)->nbr > (*stack_a)->next->nbr)
		sa(stack_a);
}

// need to make this functio to put the number ho has the lower cost back to a
void	move_lower_cost(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	cost;
	int	nbr;
	int	nbr_moves;
	int	bf;
	int	bf_moves;

	cost = INT_MAX;
	while ((*stack_b) != NULL)
	{
		nbr = (*stack_b)->nbr;
		nbr_moves = moves_to_top(stack_b, nbr);
		bf = (*stack_b)->bf;
		bf_moves = moves_to_top(*stack_a, bf);
		if (nbr_moves + bf_moves < cost)
			cost = nbr_moves + bf_moves;
		(*stack_b)->next;
	}
}

void	sort_medium_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	mean;

	get_rank(stack_a);
	while (stack_size(*stack_a) > 5)
	{
		mean = calculate_mean(*stack_a);
		if ((*stack_a)->nbr < mean)
			pb(stack_a, stack_b);
		else if ((*stack_a)->nbr >= mean)
			ra(stack_a);
	}
	find_best_buddy(stack_a, stack_b);
	update_moves_to_top(stack_a, stack_b);
	print_stack(*stack_a);
	print_stack(*stack_b);
}
