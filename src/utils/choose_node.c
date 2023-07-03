/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:54:23 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/03 15:51:28 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node_info	choose_node(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_node_info		info;
	t_node_info		best_node;
	t_stack_node	*tmp;

	best_node.cost = 2147483647;
	tmp = *stack_b;
	while (tmp != NULL)
	{
		info.number = tmp->nbr;
		info.index = get_index(*stack_b, tmp->nbr);
		info.best_buddy = find_bf(stack_a, stack_b);
		info.best_buddy_index = get_index(*stack_a, info.best_buddy);
		info.moves_to_top = moves_to_top(stack_b, stack_size(*stack_b),
				info.index);
		info.buddy_moves_to_top = moves_to_top(stack_a, stack_size(*stack_a),
				info.best_buddy_index);
		info.cost = info.moves_to_top + info.buddy_moves_to_top;
		if (info.cost < best_node.cost)
			best_node = info;
		tmp = tmp->next;
	}
	return (best_node);
}
