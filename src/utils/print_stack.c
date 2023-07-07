/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:11:35 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/07 21:23:07 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_stack_node *stack)
{
	t_stack_node	*current;

	current = stack;
	while (current != NULL)
	{
		ft_putstr_fd("nbr -> ", 1);
		ft_putnbr_fd(current->nbr, 1);
		ft_putstr_fd("\n", 1);
		current = current->next;
	}
	ft_putstr_fd("\n", 1);
}

// Path: src/utils/print_stack.c