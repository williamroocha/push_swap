/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:06:43 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/12 09:42:08 by wiferrei         ###   ########.fr       */
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
	if (a_is_sorted(stack_a))
	{
		ft_putstr_fd("List is already sorted\n", 1);
		return (0);
	}
	if (stack_size(stack_a) < 10)
		sort_small_stack(&stack_a, &stack_b);
	else if (stack_size(stack_a) >= 10)
	{
		sort_medium_stack(&stack_a, &stack_b);
	}
	if (a_is_sorted(stack_a))
		printf("Essa merda ta sorteada\n");
	free(stack_a);
	free(stack_b);
	return (0);
}

// Path: src/push_swap.c