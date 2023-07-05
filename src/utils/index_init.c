/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 07:01:40 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/05 07:04:52 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	index_init(t_stack_node *stack)
{
	int				*array;
	int				i;
	t_stack_node	*node;

	array = NULL;
	array = stack_dup(stack);
	node = stack;
	i = 0;
	while (node->next != stack)
	{
		node->index = i++;
		node = node->next;
	}
	node->index = i;
	quicksort(array, 0, stack_size(stack) - 1);
	node = stack;
	free(array);
}
