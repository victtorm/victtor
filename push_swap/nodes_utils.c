/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:39:48 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/23 16:51:31 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  *cheapest(t_list **stack)
{
    t_list  *cheaper;
    t_list  *tmp;

    tmp = *stack;
    cheaper = tmp;
    while (tmp)
    {
        if(tmp->cost < cheaper->cost)
            cheaper = tmp;
        tmp = tmp->next;
    }
    return (cheaper);
}

void    node_index(t_list **stack)
{
    int     med;
    int     i;

    med = ft_lstsize(*stack) / 2;
    i = 0;
    while (stack)
    {
        stack->index = i;
        if (i < med)
            stack->above_med = true;
        else 
            stack->above_med = false;
        stack = stack->next;
        i++;
    }
}

void    node_target(t_list **stack_src, t_list  **stack_dst)
{
    t_list  *target_node;
    long    target;

    *target_node = NULL;
    target = -214783649;
    while (stack_dst)
    {
        if (stack_src->number < stack_dst->number) && (stack_src->number < target)
    }
}