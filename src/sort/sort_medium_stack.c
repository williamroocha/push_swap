/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/06 21:04:31 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_medium_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	get_rank(stack_a);
	print_stack(*stack_a);
	pb(stack_a, stack_b);
	pa(stack_a, stack_b);
}

// update the index and divide in 3