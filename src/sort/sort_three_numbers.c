/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:31:39 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 10:44:15 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three_numbers(t_stack_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->data;
	b = (*stack_a)->next->data;
	c = (*stack_a)->next->next->data;
	if (a < b && b < c)
		return ;
	else if (a < b && b > c && a < c)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a < b && b > c && a > c)
		ra(stack_a);
	else if (a > b && b < c && a < c)
		sa(stack_a);
	else if (a > b && b < c && a > c)
		rra(stack_a);
	else if (a > b && b > c)
	{
		sa(stack_a);
		ra(stack_a);
	}
}
