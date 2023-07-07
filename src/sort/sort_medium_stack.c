/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/07 22:40:09 by wiferrei         ###   ########.fr       */
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
	get_rank(stack_a);
	while (stack_size(*stack_a) != 3)
		pb_two_smallparts(stack_a, stack_b);
	sort_small_stack(stack_a, stack_b);
	while (stack_size(*stack_b) > 0)
	{
		if (a_is_sorted(*stack_a))
			aux_sort(stack_a, stack_b);
		else
		{
			print_stack(*stack_a);
			break ;
		}
	}
}
