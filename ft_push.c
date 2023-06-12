/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:27:15 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/12 13:38:23 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack_node **src, t_stack_node **dest)
{
	t_stack_node	*top;

	if (*src)
	{
		top = *src;
		*src = (*src)->next;
		if (*dest)
		{
			(*dest)->prev = top;
		}
		top->next = *dest;
		top->prev = NULL;
		*dest = top;
	}
}
