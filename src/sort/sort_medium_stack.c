/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/04 21:38:05 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_medium_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	mid;
	int	i;
	int	*array;

	mid = find_mid_value(*stack_a);
	i = stack_size(*stack_a);
	array = stack_dup(*stack_a);
	quicksort(array, 0, i - 1);
	while (i > 3)
	{
		if ((*stack_a)->nbr < mid)
		{
			pb(stack_a, stack_b);
			i--;
		}
		else
		{
			ra(stack_a);
			i--;
		}
	}
	sort_small_stack(stack_a);
	sort_small_stack(stack_b);
	while (*stack_b)
		pa(stack_a, stack_b);
	free(array);
}
