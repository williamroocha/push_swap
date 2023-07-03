/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/03 16:51:06 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_big_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int			mean;
	int			nbr;
	int			bf;
	t_node_info	*info;

	info = (t_node_info *)malloc(sizeof(t_node_info));
	while (stack_size(*stack_a) > 3)
	{
		mean = calculate_mean(*stack_a);
		if ((*stack_a)->nbr < mean)
			pb(stack_a, stack_b);
		else if ((*stack_a)->nbr >= mean)
			ra(stack_a);
	}
	sort_three_numbers(stack_a);
	*info = choose_node(stack_a, stack_b);
	while (stack_size(*stack_b) > 0)
	{
		nbr = find_b(*stack_b, *info);
		bf = find_a(*stack_a, *info);
		put_top_a(stack_a, get_index(*stack_a, bf));
		put_top_b(stack_b, get_index(*stack_b, nbr));
		pa(stack_a, stack_b);
	}
	free(info);
}
