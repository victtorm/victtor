/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:33:35 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/23 16:51:33 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    move_cost(l_list **stack_src, t_list **stack_dst)
{
    while (stack_src)
    {
        if (stack_src->above_med)
            stack_src->cost = stack_src->index;
        if(!stack_src->above_med)
            stack_src->cost = ft_lstsize(*stack_src) - stack_src->index; 
    }
}