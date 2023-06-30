/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:54:04 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/30 20:20:30 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_bf(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	nbr;
	int	bf;

	nbr = (*stack_b)->nbr;
	bf = 0;
	while (*stack_a)
	{
		if ((*stack_a)->nbr < nbr)
			bf++;
		*stack_a = (*stack_a)->next;
	}
	return (bf);
}
