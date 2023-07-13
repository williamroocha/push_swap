/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_selector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:18:20 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/13 22:18:03 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_selector(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	size;

	if (stack_a == NULL)
		ft_putstr_fd("Error\n", 1);
	if (check_if_sorted(*stack_a))
	{
		clear_stack(stack_a);
		return ;
	}
	size = stack_size(*stack_a);
	if (size < 3 && (check_if_sorted(*stack_a)))
		sa(stack_a);
	else if (size == 3)
		sort_three_numbers(stack_a);
	else if (size == 4)
		sort_four_numbers(stack_a, stack_b);
	else if (size == 5)
		sort_five_numbers(stack_a, stack_b);
	else if (size > 5)
		sort_medium_stack(stack_a, stack_b);
}
