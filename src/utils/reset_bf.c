/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_bf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:29:00 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/19 18:19:33 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// reset the values of the stack

void	reset_bf(t_stack_node **stack)
{
	t_stack_node	*current;

	current = *stack;
	while (current != NULL)
	{
		current->nbr_moves_to_top = 0;
		current->bf = 0;
		current->bf_rank = 0;
		current->bf_moves_to_top = 0;
		current->cost = 0;
		current = current->next;
	}
	free(current);
}
