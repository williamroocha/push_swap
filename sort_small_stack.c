/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:50:01 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/12 14:26:32 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_numbers(t_stack_node **stack_a)
{
	t_stack_node	*first;
	t_stack_node	*second;
	t_stack_node	*third;

	first = *stack_a;
	second = (*stack_a)->next;
	third = (*stack_a)->next->next;
	if (a_is_sorted(*stack_a))
		return ;
	if (first->nbr > second->nbr && second->nbr < third->nbr)
		sa(stack_a);
	else if (first->nbr > second->nbr && second->nbr > third->nbr)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first->nbr > second->nbr && second->nbr < third->nbr)
		ra(stack_a);
	else if (first->nbr < second->nbr && second->nbr > third->nbr
		&& first->nbr < third->nbr)
		rra(stack_a);
	else if (first->nbr < second->nbr && second->nbr > third->nbr
		&& first->nbr > third->nbr)
		sa(stack_a);
}
