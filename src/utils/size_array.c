/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:16:49 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/06 10:19:12 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	size_array(int *array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}
