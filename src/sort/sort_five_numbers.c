/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:44:46 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 16:53:38 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Step 1: Move top two numbers from Stack A to Stack B.
// Step 2-3: Sort the remaining three numbers in Stack A
// Step 4-6: Move numbers from Stack B back to Stack A
void	sort_five_numbers(t_stack_node **stack_a, t_stack_node **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	sort_three_numbers(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

// Path: src/sort/sort_five_numbers.c