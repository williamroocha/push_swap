/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_non_integers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:08:35 by wiferrei          #+#    #+#             */
/*   Updated: 2023/07/13 20:09:02 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	check_non_integers(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i] != NULL)
	{
		j = 0;
		if (av[i][j] == '-')
			j++;
		while (av[i][j] != '\0')
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				ft_putstr_fd("Error\n", 1);
				exit(0);
			}
			j++;
		}
		i++;
	}
}
