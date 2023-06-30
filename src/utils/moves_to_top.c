/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_to_top.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 09:23:01 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/30 09:25:27 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	moves_to_top(t_stack_node **stack, int size, int nbr)
{
	int	moves;
	int	index;

	moves = 0;
	index = get_index(*stack, nbr);
	if (index <= size / 2)
		moves = index;
	else
		moves = size - index;
	return (moves);
}
