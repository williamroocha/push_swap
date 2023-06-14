/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:31:39 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 17:54:16 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Case 1: (2, 1, 3) sa → (1, 2, 3). 
// Case 2: (3, 2, 1) sa → (2, 3, 1) rra → (1, 2, 3).
// Case 3: (3, 1, 2) ra → (1, 2, 3). 
// Case 4: (1, 3, 2) sa → (3, 1, 2) ra → (1, 2, 3).
// Case 5: (2, 3, 1) rra → (1, 2, 3).

void	sort_three_numbers(t_stack_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->nbr;
	b = (*stack_a)->next->nbr;
	c = (*stack_a)->next->next->nbr;
	if (a > b && b < c && a < c)
		sa(stack_a);
	else if (a > b && b > c && a > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a > b && b < c && a > c)
		ra(stack_a);
	else if (a < b && b > c && a < c)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (a < b && b > c && a > c)
		rra(stack_a);
}

// Path: src/sort/sort_three_numbers.c