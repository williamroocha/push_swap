/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:32:27 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/12 09:48:44 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_init(int ac, char **av)
{
	int				i;
	int				nbr;
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;
	t_stack_node	*newnode;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	while (av[i])
	{
		nbr = ft_atoi(av[i]);
		newnode = ft_newnode(nbr);
		ft_addnode_back(&stack_a, newnode);
		/*Print the value of each node*/
		printf("node value: %d\n", newnode->nbr);
		i++;
	}
	return (0);
}
