/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:01:05 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/21 11:41:38 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate(t_stack_node **stack)
{
	t_stack_node	*last;
	t_stack_node	*temp;

	if (*stack && (*stack)->next)
	{
		last = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		temp = *stack;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = last;
		last->prev = temp;
		last->next = NULL;
	}
}

// ra (rotate a) : Top number in A goes to bottom of A

void	ra(t_stack_node **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

// rb (rotate b) : Top number in B goes to bottom of B

void	rb(t_stack_node **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}

// rr : ra and rb at the same time

void	rr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}

// Path: src/operations/rotate_functions.c