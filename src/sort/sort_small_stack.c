/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:59:15 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/20 16:11:30 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three_numbers(t_stack_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->nbr;
	second = (*stack_a)->next->nbr;
	third = (*stack_a)->next->next->nbr;
	if ((first > second) && (second < third) && (first < third))
		sa(stack_a);
	else if ((first > second) && (second > third) && (first > third))
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if ((first > second) && (second < third) && (first > third))
		ra(stack_a);
	else if ((first < second) && (second > third) && (first < third))
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((first < second) && (second > third) && (first > third))
		rra(stack_a);
}

void	brute_compare(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	first_a;
	int	second_a;
	int	third_a;
	int	current_b;

	current_b = (*stack_b)->nbr;
	first_a = (*stack_a)->nbr;
	second_a = (*stack_a)->next->nbr;
	third_a = (*stack_a)->next->next->nbr;
	if (current_b < first_a)
		pa(stack_a, stack_b);
	else if (current_b > first_a && current_b < second_a)
	{
		case_1(stack_a, stack_b);
	}
	else if (current_b > second_a && current_b < third_a)
	{
		case_2(stack_a, stack_b);
	}
	else if (current_b > third_a)
	{
		case_3(stack_a, stack_b);
	}
}

void	sort_four_numbers(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	max;

	max = find_max_value(*stack_a);
	if ((*stack_a)->nbr == max)
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_three_numbers(stack_a);
	brute_compare(stack_a, stack_b);
}

void	sort_five_numbers(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	max;
	int	min;

	max = find_max_value(*stack_a);
	min = find_min_value(*stack_a);
	while (stack_size(*stack_a) > 3)
	{
		if ((*stack_a)->nbr == max)
			ra(stack_a);
		pb(stack_a, stack_b);
	}
	sort_three_numbers(stack_a);
	if ((*stack_b)->nbr == min || (*stack_b)->nbr > (*stack_b)->next->nbr)
		rb(stack_b);
	while (stack_size(*stack_b) > 0)
		brute_compare(stack_a, stack_b);
}

void	sort_small_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	size_a;

	size_a = stack_size(*stack_a);
	if (size_a < 3)
		sa(stack_a);
	else if (size_a == 3)
		sort_three_numbers(stack_a);
	else if (size_a == 4)
		sort_four_numbers(stack_a, stack_b);
	else if (size_a == 5)
		sort_five_numbers(stack_a, stack_b);
}
