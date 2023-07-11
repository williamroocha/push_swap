/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:53:20 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/11 07:58:03 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
