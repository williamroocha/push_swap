/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/06 11:04:01 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_medium_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	*arr;
	int	i;

	i = 0;
	arr = stack_dup(*stack_a);
	quicksort(arr, 0, stack_size(*stack_a) - 1);
	pb(stack_a, stack_b);
	pa(stack_a, stack_b);
	while (arr[i])
	{
		printf("%d\n", arr[i]);
		i++;
	}
}

// update the index and divide in 3 