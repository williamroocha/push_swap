/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:08:51 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/21 11:41:20 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate(t_stack_node **stack)
{
	t_stack_node	*temp;

	if (*stack && (*stack)->next)
	{
		temp = *stack;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		temp->prev = NULL;
		temp->next = *stack;
		(*stack)->prev = temp;
		*stack = temp;
	}
}

// rra (reverse rotate a) : Bottom number in A goes to top of A

void	rra(t_stack_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr_fd("rra\n", 1);
}

// rrb (reverse rotate b) : Bottom number in B goes to top of B

void	rrb(t_stack_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

// rrr (reverse rotate a and b) : rra and rrb at the same time

void	rrr(t_stack_node **stack_a, t_stack_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}

// Path: src/operations/reverse_rotate_functions.c