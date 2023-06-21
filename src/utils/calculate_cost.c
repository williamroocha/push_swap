/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_cost.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:16:21 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/21 15:26:48 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/* This function returns the number of moves
required to put an element on the top of the stack. */

int	calculate_cost(int size, int i)
{
	int	counter;

	counter = 0;
	if (i <= (size / 2))
	{
		counter = i;
	}
	else if (i > (size / 2))
		counter = size - i;
	return (counter);
}
