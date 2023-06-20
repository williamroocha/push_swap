/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/20 14:53:32 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_big_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	mean;

	while (stack_size(*stack_a) > 5)
	{
		mean = calculate_mean(*stack_a);
		if ((*stack_a)->nbr < mean)
			pb(stack_a, stack_b);
		else if ((*stack_a)->nbr >= mean)
			ra(stack_a);
	}
}
