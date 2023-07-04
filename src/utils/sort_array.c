/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:56:28 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/04 21:00:12 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_arr(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	partition(int *array, int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	pivot = array[end];
	i = start - 1;
	j = start;
	while (j <= end - 1)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_arr(&array[i], &array[j]);
		}
		j++;
	}
	swap_arr(&array[i + 1], &array[end]);
	return (i + 1);
}

void	quicksort(int *array, int start, int end)
{
	int	pivot_index;

	if (start < end)
	{
		pivot_index = partition(array, start, end);
		quicksort(array, start, pivot_index - 1);
		quicksort(array, pivot_index + 1, end);
	}
}
