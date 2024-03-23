/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:40:05 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/22 17:15:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	link_stack(t_list *stack, t_list *new)
{
	stack->next = new;
	new->prev = stack;
}

t_list	*stack_node(char *str)
{
	t_list	*node;

	node = NULL;
	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->number = ft_atoi(str);
	node->target = NULL;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

t_list	*create_stack(t_list *stack, char **str)
{
	t_list	*new;
	t_list	*stack_a;
	
	new = NULL;
	stack_a = NULL;
	stack = stack_node(*str);
	stack_a = stack;
	str++;
	while (*str)
	{
		new = stack_node(*str);
		link_stack(stack, new);
		stack = stack->next;
		str++;
	}
	return (stack_a);
}
