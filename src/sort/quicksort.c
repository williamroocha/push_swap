/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:15:10 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/16 16:15:40 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	quicksort(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if ((*stack_b)->nbr < (*stack_a)->nbr)
		pa(stack_a, stack_b);
	else if ((*stack_b)->nbr > (*stack_a)->nbr
		&& (*stack_b)->nbr < (*stack_a)->next->nbr)
	{
		ra(stack_a);
		pa(stack_a, stack_b);
		rra(stack_a);
	}
	else if ((*stack_b)->nbr > (*stack_a)->nbr
		&& (*stack_b)->nbr > (*stack_a)->next->nbr
		&& (*stack_b)->nbr < (*stack_a)->next->next->nbr)
	{
		ra(stack_a);
		ra(stack_a);
		pa(stack_a, stack_b);
		rra(stack_a);
		rra(stack_a);
	}
	else if ((*stack_b)->nbr > (*stack_a)->nbr
		&& (*stack_b)->nbr > (*stack_a)->next->nbr)
	{
		rra(stack_a);
		pa(stack_a, stack_b);
		ra(stack_a);
		ra(stack_a);
	}
}
