/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:10:39 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:47:18 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Get the final position of a number in the stack

void	get_rank(t_stack_node **stack_a)
{
	int				*arr;
	int				i;
	int				position;
	t_stack_node	*current;

	arr = stack_dup(*stack_a);
	i = 0;
	current = *stack_a;
	quicksort(arr, 0, stack_size(*stack_a) - 1);
	while (current != NULL)
	{
		position = i + 1;
		if (arr[i] == current->nbr)
		{
			current->rank = position;
			current = current->next;
			i = -1;
		}
		i++;
	}
	free(arr);
	free(current);
}
