/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/12 09:40:32 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
	sort_small_stack(stack_a, stack_b);
	while (*stack_b != NULL)
	{
		update_moves_to_top(stack_a, stack_b);
		find_best_buddy(stack_a, stack_b);
		update_cost(stack_b);
		move_best_cost(stack_a, stack_b);
	}
	if (!a_is_sorted(*stack_a))
	{
		last_rotate(stack_a);
	}
}
