/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:44:46 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/15 15:44:12 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_five_numbers(t_stack_node **stack_a, t_stack_node **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	sort_three_numbers(stack_a);
	while (*stack_b)
    {
        if ((*stack_b)->nbr < (*stack_a)->nbr)
            pa(stack_a, stack_b);
        else
            ra(stack_a);
    }
}
// Path: src/sort/sort_five_numbers.c