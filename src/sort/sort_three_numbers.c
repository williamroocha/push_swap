/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:31:39 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 11:07:25 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three_numbers(t_stack_node **stack_a)
{
	t_stack_node	*current;

	current = *stack_a;
	if (current->nbr > current->next->nbr
		&& current->nbr < current->next->next->nbr)
	{
		sa(stack_a);
	}
	else if (current->nbr > current->next->nbr
		&& current->nbr > current->next->next->nbr)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (current->nbr < current->next->nbr
		&& current->nbr > current->next->next->nbr)
	{
		ra(stack_a);
	}
	else if (current->nbr < current->next->nbr
		&& current->nbr < current->next->next->nbr)
	{
		sa(stack_a);
		ra(stack_a);
	}
}
// Path: src/sort/sort_three_numbers.c