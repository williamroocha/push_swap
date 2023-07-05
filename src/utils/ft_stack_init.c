/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:32:27 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/05 06:55:55 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Fill the stack_A with the numbers from the arguments

void	ft_stack_init(char **av, t_stack_node **stack_a)
{
	t_stack_node	*newnode;

	av++;
	while (*av)
	{
		newnode = ft_newnode(ft_atoi(*av));
		newnode->index = 1;
		ft_addnode_back(stack_a, newnode);
		av++;
	}
}

// Path: src/utils/ft_stack_init.c