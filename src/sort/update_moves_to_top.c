/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_moves_to_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:07:07 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/11 07:25:09 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	update_moves_to_top(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*current_a;
	t_stack_node	*current_b;

	current_a = *stack_a;
	current_b = *stack_b;
	while (current_a != NULL)
	{
		current_a->nbr_moves_to_top = moves_to_top(stack_a, current_a->nbr);
		current_a = current_a->next;
	}
	while (current_b != NULL)
	{
		current_b->nbr_moves_to_top = moves_to_top(stack_b, current_b->nbr);
		current_b = current_b->next;
	}
}
