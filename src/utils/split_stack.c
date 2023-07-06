/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 08:03:30 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/06 21:09:51 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_part_size(t_stack_node *stack)
{
	int	size;

	size = (stack_size(stack) * SPLIT_FACTOR);
	return (size);
}

int	*split_stack(t_stack_node *stack)
{
	int	i;
	int	*arr;
	int	part1_size;
	int	part2_size;
	int	part3_size;

	i = 1;
	arr = (int *)malloc(sizeof(int) * 3);
	part1_size = get_part_size(stack);
	part2_size = get_part_size(stack);
	part3_size = stack_size(stack) - part1_size - part2_size;
	while (i <= stack_size(stack))
	{
	}
}
