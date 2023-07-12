/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:00:14 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/12 08:09:26 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	aux_sort(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	min_a;
	int	min_i;
	int	max_b;
	int	max_i;

	max_b = find_max_value(*stack_b);
	max_i = get_index(*stack_b, max_b);
	min_a = find_min_value(*stack_a);
	min_i = get_index(*stack_a, min_a);
	put_top_a(stack_a, min_i);
	put_top_b(stack_b, max_i);
	pa(stack_a, stack_b);
	if ((*stack_a)->nbr > (*stack_a)->next->nbr)
		sa(stack_a);
}

void	move_best_cost(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*best_cost;
	t_stack_node	*current;

	best_cost = *stack_b;
	current = *stack_b;
	while (current != NULL)
	{
		if (current->cost < best_cost->cost)
			best_cost = current;
		current = current->next;
	}
	if (best_cost->cost == 0)
		pa(stack_a, stack_b);
	else if (best_cost->cost > 0)
	{
		put_top_a(stack_a, get_index(*stack_a, best_cost->bf));
		put_top_b(stack_b, get_index(*stack_b, best_cost->nbr));
		pa(stack_a, stack_b);
	}
}

void	rotate_to_sort(t_stack_node **stacka_a)
{
	int	min_a;
	int	min_i;
	int	size;

	size = stack_size(*stacka_a);
	min_a = find_min_value(*stacka_a);
	min_i = get_index(*stacka_a, min_a);
	if (min_i <= size / 2)
	{
		while ((*stacka_a)->nbr != min_a && (!a_is_sorted(*stacka_a)))
			ra(stacka_a);
	}
	else
	{
		while ((*stacka_a)->nbr != min_a && (!a_is_sorted(*stacka_a)))
			rra(stacka_a);
	}
}

void	sort_medium_stack(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	mean;

	get_rank(stack_a);
	while (stack_size(*stack_a) > 5)
	{
		mean = calculate_mean(*stack_a);
		if ((*stack_a)->nbr < mean)
			pb(stack_a, stack_b);
		else if ((*stack_a)->nbr >= mean)
			ra(stack_a);
	}
	sort_small_stack(stack_a, stack_b);
	while (*stack_b != NULL)
	{
		update_moves_to_top(stack_a, stack_b);
		find_best_buddy(stack_a, stack_b);
		update_cost(stack_b);
		move_best_cost(stack_a, stack_b);
	}
	while (!a_is_sorted(*stack_a))
		rotate_to_sort(stack_a);
}
