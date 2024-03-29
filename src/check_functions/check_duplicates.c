/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:04:24 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:24:45 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Check if there are duplicates in the input

void	check_duplicates(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i] != NULL)
	{
		j = i + 1;
		while (av[j] != NULL)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				ft_putstr_fd("Error\n", 2);
				exit(0);
			}
			j++;
		}
		i++;
	}
}
