/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_top.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:18:58 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:49:03 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Put the element at the top of the stack

void	put_top_a(t_stack_node **stack_a, int i)
{
	int	size;

	size = stack_size(*stack_a);
	if ((size / 2) >= i)
	{
		while (i)
		{
			ra(stack_a);
			i--;
		}
	}
	else if ((size / 2) < i)
	{
		while (size > i)
		{
			rra(stack_a);
			i++;
		}
	}
}

void	put_top_b(t_stack_node **stack_b, int i)
{
	int	size;

	size = stack_size(*stack_b);
	if ((size / 2) >= i)
	{
		while (i)
		{
			rb(stack_b);
			i--;
		}
	}
	else if ((size / 2) < i)
	{
		while (size > i)
		{
			rrb(stack_b);
			i++;
		}
	}
}
