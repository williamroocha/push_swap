/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_compare_moves.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:49:37 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/20 16:05:34 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// current_b > first_a && current_b < second_a

void	case_1(t_stack_node **stack_a, t_stack_node **stack_b)
{
	ra(stack_a);
	pa(stack_a, stack_b);
	rra(stack_a);
}

// current_b > second_a && current_b < third_a

void	case_2(t_stack_node **stack_a, t_stack_node **stack_b)
{
	ra(stack_a);
	ra(stack_a);
	pa(stack_a, stack_b);
	rra(stack_a);
	rra(stack_a);
}

// current_b > third_a

void	case_3(t_stack_node **stack_a, t_stack_node **stack_b)
{
	rra(stack_a);
	pa(stack_a, stack_b);
	ra(stack_a);
	ra(stack_a);
}
