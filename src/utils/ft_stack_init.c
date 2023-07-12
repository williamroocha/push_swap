/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:32:27 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/12 11:00:08 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reset_bf(t_stack_node **stack)
{
	t_stack_node	*current;

	current = *stack;
	while (current != NULL)
	{
		current->nbr_moves_to_top = 0;
		current->bf = 0;
		current->bf_rank = 0;
		current->bf_moves_to_top = 0;
		current->cost = 0;
		current = current->next;
	}
	free(current);
}

// Fill the stack_A with the numbers from the arguments

void	ft_stack_init(char **av, t_stack_node **stack_a)
{
	t_stack_node	*newnode;

	av++;
	while (*av)
	{
		newnode = ft_newnode(ft_atoi(*av));
		newnode->nbr_moves_to_top = 0;
		newnode->bf = 0;
		newnode->bf_rank = 0;
		newnode->bf_moves_to_top = 0;
		newnode->cost = 0;
		ft_addnode_back(stack_a, newnode);
		av++;
	}
}

// Path: src/utils/ft_stack_init.c