/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:01:05 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 12:42:52 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// ra (rotate a) : Top number in A goes to bottom of A

void	ra(t_stack_node **stack_a)
{
	t_stack_node	*last;
	t_stack_node	*temp;

	if (*stack_a && (*stack_a)->next)
	{
		last = *stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_a)->prev = NULL;
		temp = *stack_a;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = last;
		last->prev = temp;
		last->next = NULL;
	}
}

// rb (rotate b) : Top number in B goes to bottom of B

void	rb(t_stack_node **stack_b)
{
	t_stack_node	*last;
	t_stack_node	*temp;

	if (*stack_b && (*stack_b)->next)
	{
		last = *stack_b;
		*stack_b = (*stack_b)->next;
		(*stack_b)->prev = NULL;
		temp = *stack_b;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = last;
		last->prev = temp;
		last->next = NULL;
	}
}

// rr : ra and rb at the same time

void	rr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

// Path: src/operations/rotate_functions.c