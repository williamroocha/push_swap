/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:52:59 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 11:20:19 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// sa (swap a) : Swap the top two numbers in A

void	sa(t_stack_node **stack_a)
{
	int	temp;

	if (*stack_a && (*stack_a)->next)
	{
		temp = (*stack_a)->nbr;
		(*stack_a)->nbr = (*stack_a)->next->nbr;
		(*stack_a)->next->nbr = temp;
	}
}

// sb (swap b) : Swap the top two numbers in B

void	sb(t_stack_node **stack_b)
{
	int	temp;

	if (*stack_b && (*stack_b)->next)
	{
		temp = (*stack_b)->nbr;
		(*stack_b)->nbr = (*stack_b)->next->nbr;
		(*stack_b)->next->nbr = temp;
	}
}

// ss : sa and sb at the same time

void	ss(t_stack_node **stack_a, t_stack_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

// Path: src/operations/swap_functions.c