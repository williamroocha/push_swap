/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:44:46 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/15 11:39:04 by wiferrei         ###   ########.fr       */
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
		if ((*stack_a)->nbr == max || (*stack_a)->nbr == min)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
	sort_three_numbers(stack_a);
	while (*stack_b)
	{
		if ((*stack_b)->nbr == max)
			pa(stack_b, stack_a);
		else
			rb(stack_b);
	}
	ra(stack_a);
	ra(stack_a);
}

// Path: src/sort/sort_five_numbers.c