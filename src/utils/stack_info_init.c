/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:29:43 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/30 21:47:15 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node_info	*info_init(t_stack_node *stack)
{
	t_node_info	*info;

	info = (t_node_info *)malloc(sizeof(t_node_info));
	if (!info)
		return (NULL);
	info->number = stack->nbr;
	info->index = 0;
	info->best_buddy = 0;
	info->moves_to_top = 0;
	info->buddy_moves_to_top = 0;
	info->cost = 0;
	return (info);
}
