/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:44:46 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/16 16:17:07 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_five_numbers(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	max;
	int	min;

	max = find_max_value(*stack_a);
	min = find_min_value(*stack_a);
	while (stack_size(*stack_a) > 3)
	{
		if ((*stack_a)->nbr == max)
			ra(stack_a);
		pb(stack_a, stack_b);
	}
	sort_three_numbers(stack_a);
	if ((*stack_b)->nbr == min || (*stack_b)->nbr > (*stack_b)->next->nbr)
		rb(stack_b);
	while (stack_size(*stack_b) > 0)
	{
		quicksort(stack_a, stack_b);
	}
}

// Path: src/sort/sort_five_numbers.c