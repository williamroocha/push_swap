/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_mean.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:50:50 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/20 12:35:00 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	calculate_mean(t_stack_node *stack)
{
	int				sum;
	int				count;
	t_stack_node	*current;

	sum = 0;
	count = 0;
	current = stack;
	while (current)
	{
		sum += current->nbr;
		count++;
		current = current->next;
	}
	if (count == 0)
		return (0);
	return (sum / count);
}
