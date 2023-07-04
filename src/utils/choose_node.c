/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:54:23 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/04 08:46:20 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node_info	*choose_node(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_node_info	*node;
	t_node_info	*best_node;

	node = info_init();
	best_node = info_init();
	best_node->cost = 2147483647;
	if (!node || !best_node)
		return (NULL);
	while (*stack_b)
	{
		node->number = (*stack_b)->nbr;
		node->index = get_index(*stack_b, node->number);
		node->best_buddy = find_bf(*stack_a, *stack_b);
		node->best_buddy_index = get_index(*stack_a, node->best_buddy);
		node->moves_to_top = moves_to_top(stack_b, stack_size(*stack_b),
				node->number);
		node->buddy_moves_to_top = moves_to_top(stack_a, stack_size(*stack_a),
				node->best_buddy);
		node->cost = node->moves_to_top + node->buddy_moves_to_top;
		if (node->cost < best_node->cost)
			*best_node = *node;
		*stack_b = (*stack_b)->next;
	}
	return (best_node);
}
