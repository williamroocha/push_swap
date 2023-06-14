/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:42:03 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 11:15:14 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	stack_size(t_stack_node *stack)
{
	int				size;
	t_stack_node	*current;

	size = 0;
	current = stack;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size - 1);
}

// Path: src/utils/stack_size.c