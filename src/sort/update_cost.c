/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:53:20 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/19 18:17:28 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Update the cost to move the number
// and the best friend to the top of the stack

void	update_cost(t_stack_node **stack_)
{
	t_stack_node	*current;

	current = *stack_;
	while (current != NULL)
	{
		current->cost = current->nbr_moves_to_top + current->bf_moves_to_top;
		current = current->next;
	}
}
