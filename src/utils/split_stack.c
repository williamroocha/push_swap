/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 08:03:30 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/07 20:57:57 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_part_size(t_stack_node *stack)
{
	int	size;

	size = (stack_size(stack) * SPLIT_FACTOR);
	return (size);
}

int	*split_stack(t_stack_node *stack)
{
	int				*arr;
	t_stack_node	*current;

	arr = (int *)malloc(sizeof(int) * 3);
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	current = stack;
	while (current != NULL)
	{
		if (current->rank == get_part_size(stack))
			arr[0] = current->nbr;
		else if (current->rank == get_part_size(stack) * 2)
			arr[1] = current->nbr;
		else if (current->rank == stack_size(stack))
			arr[2] = current->nbr;
		current = current->next;
	}
	return (arr);
}
