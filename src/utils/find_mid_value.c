/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_mid_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:27:48 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/04 21:06:40 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_mid_value(t_stack_node *stack)
{
	int	mid;
	int	i;
	int	*array;

	array = stack_dup(stack);
	i = stack_size(stack);
	quicksort(array, 0, i - 1);
	mid = array[i / 2];
	free(array);
	return (mid);
}
