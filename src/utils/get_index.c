/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:06:25 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:46:54 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Get the index of a number in the stack

int	get_index(t_stack_node *stack, int nbr)
{
	int				i;
	t_stack_node	*current;

	i = 0;
	current = stack;
	while (current != NULL)
	{
		if (current->nbr == nbr)
		{
			return (i);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
