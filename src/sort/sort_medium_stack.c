/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/07 11:20:45 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb_two_smallparts(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	part1_size;
	int	part2_size;
	int	part3_size;
	int	min;

	min = find_min_value(*stack_a);
	part1_size = get_part_size(*stack_a);
	part2_size = get_part_size(*stack_a) * 2;
	part3_size = (stack_size(*stack_a) - get_part_size(*stack_a) * 2);
	while (stack_size(*stack_a) > part3_size && stack_size(*stack_a) > 3)
	{
		if ((*stack_a)->rank <= min + part2_size - 1)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
}

void	sort_medium_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	get_rank(stack_a);
	while (stack_size(*stack_a) > 3)
		pb_two_smallparts(stack_a, stack_b);
	print_stack(*stack_a);
}
