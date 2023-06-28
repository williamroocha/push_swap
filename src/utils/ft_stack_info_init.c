/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_info_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 21:06:07 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/28 21:24:14 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_stack_info_init(t_stack_info **stack_info, int number)
{
	*stack_info = (t_stack_info *)malloc(sizeof(t_stack_info));
	if (*stack_info == NULL)
	{
		return ;
	}
	(*stack_info)->number = number;
	(*stack_info)->best_buddy = -1;
	(*stack_info)->moves_to_top = 0;
	(*stack_info)->buddy_moves_to_top = 0;
}
