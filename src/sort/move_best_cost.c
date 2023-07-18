/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_best_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:02:02 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:38:30 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Prepare the stacks and move the node with best cost to stack_a

void	move_best_cost(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*best_cost;
	t_stack_node	*current;

	best_cost = *stack_b;
	current = *stack_b;
	while (current != NULL)
	{
		if (current->cost < best_cost->cost)
			best_cost = current;
		current = current->next;
	}
	if (best_cost->cost == 0)
		pa(stack_a, stack_b);
	else if (best_cost->cost > 0)
	{
		put_top_a(stack_a, get_index(*stack_a, best_cost->bf));
		put_top_b(stack_b, get_index(*stack_b, best_cost->nbr));
		pa(stack_a, stack_b);
	}
}
