/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:39:28 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/22 17:31:22 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     sort_check(t_list *stack)
{
    if (stack == NULL)
        return (1);
    while (stack->next)
    {
        if(stack->number > stack->next->number)
            return (0);
        stack = stack->next;
    }
    return (1);
}

void    sort_3(t_list **stack)
{
        if(((*stack)->number > (*stack)->next->number) && ((*stack)->number > (*stack)->next->next->number))
            ra(stack);
        if(((*stack)->number < (*stack)->next->number) && ((*stack)->next->number > (*stack)->next->next->number))
            rra(stack);
        if((*stack)->number > (*stack)->next->number)
            sa(stack);
}