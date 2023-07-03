/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:27:11 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/03 16:46:09 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_a(t_stack_node *stack_a, t_node_info info)
{
	int	bf;

	bf = stack_a->nbr;
	while (stack_a)
	{
		if (stack_a->nbr == info.best_buddy)
			return (bf);
		stack_a = stack_a->next;
	}
	return (0);
}

int	find_b(t_stack_node *stack_b, t_node_info info)
{
	int	nbr;

	nbr = stack_b->nbr;
	while (stack_b)
	{
		if (stack_b->nbr == info.number)
			return (nbr);
		stack_b = stack_b->next;
	}
	return (0);
}
