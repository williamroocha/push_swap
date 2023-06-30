/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:54:23 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/30 22:02:49 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node_info	choose_node(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_node_info	info;
	t_node_info	best_node;

	info = *info_init(*stack_b);
	best_node = *info_init(*stack_b);
	best_node.cost = 0;
	while (*stack_b != NULL)
	{
		info.number = (*stack_b)->nbr;
		info.index = get_index(*stack_b, (*stack_b)->nbr);
		info.best_buddy = find_bf(stack_a, stack_b);
		info.best_buddy_index = get_index(*stack_a, info.best_buddy);
		info.moves_to_top = moves_to_top(stack_b, stack_size(*stack_b),
				info.index);
		info.buddy_moves_to_top = moves_to_top(stack_a, stack_size(*stack_a),
				info.best_buddy_index);
		info.cost = info.moves_to_top + info.buddy_moves_to_top;
		if (info.cost < best_node.cost)
			best_node = info;
		*stack_b = (*stack_b)->next;
	}
	return (best_node);
}
