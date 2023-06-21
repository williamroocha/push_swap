/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:52:59 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/21 11:41:56 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_stack_node **stack)
{
	int	temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack)->nbr;
		(*stack)->nbr = (*stack)->next->nbr;
		(*stack)->next->nbr = temp;
	}
}

// sa (swap a) : Swap the top two numbers in A

void	sa(t_stack_node **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

// sb (swap b) : Swap the top two numbers in B

void	sb(t_stack_node **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

// ss : sa and sb at the same time

void	ss(t_stack_node **stack_a, t_stack_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}

// Path: src/operations/swap_functions.c