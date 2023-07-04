/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/04 08:51:09 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_node_info(t_node_info info)
{
	printf("Number: %d\n", info.number);
	printf("Index: %d\n", info.index);
	printf("Best Buddy: %d\n", info.best_buddy);
	printf("Best Buddy Index: %d\n", info.best_buddy_index);
	printf("Moves to Top: %d\n", info.moves_to_top);
	printf("Buddy Moves to Top: %d\n", info.buddy_moves_to_top);
	printf("Cost: %d\n", info.cost);
}

void	sort_big_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int			mean;
	t_node_info	*info;

	while (stack_size(*stack_a) > 3)
	{
		mean = calculate_mean(*stack_a);
		if ((*stack_a)->nbr < mean)
			pb(stack_a, stack_b);
		else if ((*stack_a)->nbr >= mean)
			ra(stack_a);
	}
	sort_three_numbers(stack_a);
	while (stack_size(*stack_b) > 0)
	{
		info = choose_node(stack_a, stack_b);
		pa(stack_a, stack_b);
		free(info);
	}
}
