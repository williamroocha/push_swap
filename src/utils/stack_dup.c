/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:50:50 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:50:27 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Make an array from the stack

int	*stack_dup(t_stack_node *stack)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(sizeof(int) * stack_size(stack));
	while (stack)
	{
		array[i] = stack->nbr;
		stack = stack->next;
		i++;
	}
	return (array);
}
