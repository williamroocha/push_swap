/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:06:43 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/15 10:51:34 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	ft_stack_init(av, &stack_a);
	ft_putstr_fd("List before sorting:\n", 1);
	print_stack(stack_a);
	if (a_is_sorted(stack_a))
	{
		ft_putstr_fd("List is already sorted\n", 1);
		return (0);
	}
	if (stack_size(stack_a) == 3)
		sort_three_numbers(&stack_a);
	else if (stack_size(stack_a) == 5)
		sort_five_numbers(&stack_a, &stack_b);
	ft_putstr_fd("List after sorting:\n", 1);
	print_stack(stack_a);
	return (0);
}

// Path: src/push_swap.c