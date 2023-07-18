/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_limits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:52:53 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/18 20:24:05 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Check if the input is within the limits of an integer

void	check_limits(char **av)
{
	int			i;
	long long	num;

	i = 1;
	while (av[i] != NULL)
	{
		num = ft_atoll(av[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		i++;
	}
}
