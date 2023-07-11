/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/11 07:59:54 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	aux_sort(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	min_a;
	int	min_i;
	int	max_b;
	int	max_i;

	max_b = find_max_value(*stack_b);
	max_i = get_index(*stack_b, max_b);
	min_a = find_min_value(*stack_a);
	min_i = get_index(*stack_a, min_a);
	put_top_a(stack_a, min_i);
	put_top_b(stack_b, max_i);
	pa(stack_a, stack_b);
	if ((*stack_a)->nbr > (*stack_a)->next->nbr)
		sa(stack_a);
}

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
	update_moves_to_top(stack_a, stack_b);
	find_best_buddy(stack_a, stack_b);
	update_cost(stack_b);
	print_stack(*stack_b);
}
