/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:14:44 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/21 11:41:01 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// pa (push a) : Top number in B goes to top of A

void	pa(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*top;

	if (*stack_b)
	{
		top = *stack_b;
		*stack_b = (*stack_b)->next;
		if (*stack_a)
		{
			(*stack_a)->prev = top;
		}
		top->next = *stack_a;
		top->prev = NULL;
		*stack_a = top;
	}
	ft_putstr_fd("pa\n", 1);
}

// pb (push b) : Top number in A goes to top of B

void	pb(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*top;

	if (*stack_a)
	{
		top = *stack_a;
		*stack_a = (*stack_a)->next;
		if (*stack_b)
		{
			(*stack_b)->prev = top;
		}
		top->next = *stack_b;
		top->prev = NULL;
		*stack_b = top;
	}
	ft_putstr_fd("pb\n", 1);
}

// Path: src/operations/push_functions.c