/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:53:35 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/20 18:19:18 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_add, t_list **stack_lost)
{

	if (ft_lstsize(*stack_lost) < 1)
		return ;
	(*stack_add)->prev = *stack_lost;
	(*stack_lost)->next->prev = NULL;
	(*stack_lost)->next = *stack_add;

	return ;
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	write(1, "pa\n", 4);
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	write(1, "pb\n", 4);
}