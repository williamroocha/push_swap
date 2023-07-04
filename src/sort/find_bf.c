/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:54:04 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/03 20:03:04 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_bf(t_stack_node *stack_a, t_stack_node *stack_b)
{
	int				nbr;
	int				bf;
	t_stack_node	*tmp;
	int				found;

	nbr = stack_b->nbr;
	bf = 0;
	tmp = stack_a;
	found = 0;
	while (tmp)
	{
		if (tmp->nbr > nbr)
		{
			if (!found || tmp->nbr < stack_a->nbr)
			{
				bf = tmp->nbr;
				found = 1;
			}
		}
		tmp = tmp->next;
	}
	return (bf);
}
