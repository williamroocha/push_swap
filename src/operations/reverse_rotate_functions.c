/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:08:51 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 11:21:04 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// rra (reverse rotate a) : Bottom number in A goes to top of A

void	rra(t_stack_node **stack_a)
{
	t_stack_node	*temp;

	if (*stack_a && (*stack_a)->next)
	{
		temp = *stack_a;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		temp->prev = NULL;
		temp->next = *stack_a;
		(*stack_a)->prev = temp;
		*stack_a = temp;
	}
}

// rrb (reverse rotate b) : Bottom number in B goes to top of B

void	rrb(t_stack_node **stack_b)
{
	t_stack_node	*temp;

	if (*stack_b && (*stack_b)->next)
	{
		temp = *stack_b;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		temp->prev = NULL;
		temp->next = *stack_b;
		(*stack_b)->prev = temp;
		*stack_b = temp;
	}
}

// rrr (reverse rotate a and b) : rra and rrb at the same time

void	rrr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}

// Path: src/operations/reverse_rotate_functions.c