/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sequence.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 07:26:22 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/05 09:28:31 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	markup_init(t_stack_node **stack_a)
{
	t_stack_node	*node;

	node = *stack_a;
	while (node->next != *stack_a)
	{
		node->value = 0;
		node = node->next;
	}
	node->value = 0;
}

void	makrup(t_stack_node **stack_a, t_sequence *sequence)
{
	t_stack_node	*node;
	t_stack_node	*next;
	int				i;

	markup_init(stack_a);
	i = 0;
	node = *stack_a;
	while (i++ < sequence->max_index)
		next = node->next;
	node->value = 1;
	i = node->index;
	next = node->next;
	sequence->start = node->index;
	while (next->next != *stack_a)
	{
		if (i == next->index - 1)
		{
			next->value = 1;
			i = next->index;
		}
		next = next->next;
	}
	if (i == next->index - 1)
		next->value = 1;
}

t_sequence	*sequence_init(t_sequence *sequence)
{
	sequence = (t_sequence *)malloc(sizeof(t_sequence));
	sequence->max_len = 0;
	sequence->curr_len = 1;
	return (sequence);
}

void	create_sequence(t_stack_node *node, t_sequence **sequence, int i,
		t_stack_node **stack)
{
	t_stack_node	*current;
	int				prev;

	current = node->next;
	prev = node->index;
	(*sequence)->curr_len = 0;
	(*sequence)->index = i;
	while (current->next != *stack)
	{
		if (prev == current->index - 1)
		{
			(*sequence)->curr_len++;
			prev = current->index;
		}
		current = current->next;
	}
	if (prev == current->index - 1)
		(*sequence)->curr_len++;
	if ((*sequence)->curr_len > (*sequence)->max_len)
	{
		(*sequence)->max_len = (*sequence)->curr_len;
		(*sequence)->max_index = (*sequence)->index;
	}
}

t_sequence	*function_sequence(t_stack_node **stack)
{
	t_sequence		*sequence;
	t_stack_node	*node;
	int				i;

	sequence = sequence_init(sequence);
	node = *stack;
	i = 0;
	while (node->next != *stack)
	{
		create_sequence(node, &sequence, i, stack);
		node = node->next;
		i++;
	}
	return (sequence);
}
