/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:59:15 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:40:21 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Sort stacks with 3, 4 or 5 numbers

void	sort_three_numbers(t_stack_node **stack_a)
{
	int	i_min;
	int	i_max;
	int	min;
	int	max;

	min = find_min_value(*stack_a);
	max = find_max_value(*stack_a);
	i_min = get_index(*stack_a, min);
	i_max = get_index(*stack_a, max);
	if (i_min == 0 && (!check_if_sorted(*stack_a)))
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (i_min == 1 && i_max == 0)
		ra(stack_a);
	else if (i_min == 2 && i_max == 0)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (i_min == 1 && i_max == 2)
		sa(stack_a);
	else if (i_min == 2 && i_max == 1)
		rra(stack_a);
}

void	sort_four_numbers(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	i;
	int	min;

	min = find_min_value(*stack_a);
	i = get_index(*stack_a, min);
	put_top_a(stack_a, i);
	pb(stack_a, stack_b);
	sort_three_numbers(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five_numbers(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	i_min;
	int	min;

	while (stack_size(*stack_a) > 3)
	{
		min = find_min_value(*stack_a);
		i_min = get_index(*stack_a, min);
		put_top_a(stack_a, i_min);
		pb(stack_a, stack_b);
	}
	sort_three_numbers(stack_a);
	while (stack_size(*stack_a) != 5)
		pa(stack_a, stack_b);
}
