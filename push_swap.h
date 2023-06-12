/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiferrei <wiferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:43:49 by wiferrei          #+#    #+#             */
/*   Updated: 2023/06/12 11:51:02 by wiferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/*Struct Node*/

typedef struct s_stack_node
{
	int					nbr;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}						t_stack_node;

/*push_swap functions*/

int						main(int ac, char **av);

/*stack_node functions*/

void					ft_stack_init(int ac, char **av,
							t_stack_node **stack_a);
t_stack_node			*ft_newnode(int nbr);
void					ft_addnode_back(t_stack_node **head,
							t_stack_node *node);
int						stack_size(t_stack_node *stack);
bool					a_is_sorted(t_stack_node *stack_a);

/*libft functions*/

int						ft_atoi(const char *str);

#endif