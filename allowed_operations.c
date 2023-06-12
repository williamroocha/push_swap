/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allowed_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:09:26 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/12 13:10:40 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack_node **stack_a)
{
	if (*stack_a && (*stack_a)->next)
		ft_swap(&(*stack_a)->nbr, &(*stack_a)->next->nbr);
}

void	sb(t_stack_node **stack_b)
{
	if (*stack_b && (*stack_b)->next)
		ft_swap(&(*stack_b)->nbr, &(*stack_b)->next->nbr);
}

void	ss(t_stack_node **stack_a, t_stack_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	pa(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (*stack_b)
		ft_push(stack_b, stack_a);
}

void	pb(t_stack_node **stack_a, t_stack_node **stack_b)
{
	if (*stack_a)
		ft_push(stack_a, stack_b);
}
