/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_buddy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:31:15 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:33:37 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Find in the stack A the best buddy for each element of the stack B

void	find_best_buddy(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*current_a;
	t_stack_node	*current_b;
	t_stack_node	*best_friend;

	current_b = *stack_b;
	while (current_b != NULL)
	{
		best_friend = NULL;
		current_a = *stack_a;
		while (current_a != NULL)
		{
			if (current_a->nbr > current_b->nbr && (best_friend == NULL
					|| current_a->nbr < best_friend->nbr))
				best_friend = current_a;
			current_a = current_a->next;
		}
		if (best_friend != NULL)
		{
			current_b->bf = best_friend->nbr;
			current_b->bf_rank = best_friend->rank;
			current_b->bf_moves_to_top = best_friend->nbr_moves_to_top;
		}
		current_b = current_b->next;
	}
}
