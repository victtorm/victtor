/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:33:35 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/27 17:03:51 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prep_for_push(t_list **stack, t_list *target, char c)
{
	while (*stack != target)
	{
		if (target->above_med)
		{
			if (c == 'a')
				ra(stack);
			else
				rb(stack);
		}
		else
		{
			if (c == 'a')
				rra(stack);
			else
				rrb(stack);
		}
	}
}

void	move_to(t_list **stack_src, t_list **stack_dst, char c)
{
	t_list	*cheap;

	update_nodes(stack_src, stack_dst);
	cheap = cheapest(stack_src);
	if (cheap->above_med && cheap->target->above_med)
		while (cheap != *stack_src && cheap->target != *stack_dst)
			rr(stack_src, stack_dst);
	else if (!(cheap->above_med) && !(cheap->target->above_med))
		while (cheap != *stack_src && cheap->target != *stack_dst)
			rrr(stack_src, stack_dst);
	prep_for_push(stack_src, cheap, c);
	prep_for_push(stack_dst, cheap->target, c);
	if (c == 'a')
		pa(stack_src, stack_dst);
	else
		pb(stack_src, stack_dst);
}

void	to_top(t_list **stack)
{
	t_list	*min;

	min = low(stack);
	while (min != *stack)
	{
		if (min->above_med)
			ra(stack);
		else
			rra(stack);
	}
}
