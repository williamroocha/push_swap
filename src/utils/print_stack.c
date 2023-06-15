/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:11:35 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/14 21:28:18 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_stack_node *stack_a)
{
	t_stack_node	*current;

	current = stack_a;
	while (current != NULL)
	{
		ft_putnbr_fd(current->nbr, 1);
		ft_putstr_fd(" ", 1);
		current = current->next;
	}
	ft_putstr_fd("\n", 1);
}
