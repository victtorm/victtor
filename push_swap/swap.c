/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:31:08 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/22 15:26:15 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	int		tmp;

	if (ft_lstsize(*stack) < 2)
		return ;
	tmp = (*stack)->number;
	(*stack)->number = (*stack)->next->number;
	(*stack)->next->number = tmp;
	return ;
}

void	sa(t_list **a)
{
	swap(a);
	write(1, "sa\n", 4);
}

void	sb(t_list **b)
{
	swap(b);
	write(1, "sb\n", 4);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 4);
}
