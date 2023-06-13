/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:32:27 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/12 11:36:05 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Fill the stack_a*/

void	ft_stack_init(int ac, char **av, t_stack_node **stack_a)
{
	t_stack_node	*newnode;

	while (*av)
	{
		newnode = ft_newnode(ft_atoi(*av));
		ft_addnode_back(stack_a, newnode);
		av++;
	}
}
