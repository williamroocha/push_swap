/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_is_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:37:13 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 11:08:53 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	a_is_sorted(t_stack_node *stack_a)
{
	t_stack_node	*current;

	current = stack_a;
	while (current && current->next)
	{
		if (current->nbr > current->next->nbr)
			return (false);
		current = current->next;
	}
	return (true);
}

// Path: src/utils/a_is_sorted.c
