/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_to_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:35:25 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:48:11 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Find the number of moves to top for a given number

int	moves_to_top(t_stack_node **stack, int nbr)
{
	int	count;
	int	size;
	int	index;

	count = 0;
	size = stack_size(*stack);
	index = get_index(*stack, nbr);
	if ((size / 2) >= index)
	{
		while (index > 0)
		{
			count++;
			index--;
		}
	}
	else
	{
		while (size > index)
		{
			count++;
			index++;
		}
	}
	return (count);
}
