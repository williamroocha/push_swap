/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:35:51 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:34:06 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Rotate the stack until the minimum value is at the top

void	last_rotate(t_stack_node **stack_a)
{
	int	min;

	min = find_min_value(*stack_a);
	if ((get_index(*stack_a, min)) < (stack_size(*stack_a) / 2))
		while ((*stack_a)->nbr != min)
			ra(stack_a);
	else
		while ((*stack_a)->nbr != min)
			rra(stack_a);
}
