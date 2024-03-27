/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:28:50 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/27 19:14:23 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a)
{
	t_list	*stack_b;
	t_list	*test;

	stack_b = NULL;
	if (!sort_check(*stack_a))
	{
		if (ft_lstsize(*stack_a) == 2)
			sa(stack_a);
		if (ft_lstsize(*stack_a) > 3)
			pb(stack_a, &stack_b);
		if (ft_lstsize(*stack_a) > 3)
			pb(stack_a, &stack_b);
		while (ft_lstsize(*stack_a) > 3)
			move_to(stack_a, &stack_b, 'b');
		sort_3(stack_a);
		while (stack_b != NULL)
			move_to(stack_a, &stack_b, 'a');
	}
	to_top(stack_a);
	test = *stack_a;
	while (test != NULL)
	{
		ft_printf("%i\n", test->number);
		test = test->next;
	}
	free_stack(&stack_b);
	return ;
}

void	free_stack(t_list **stack)
{
	t_list	*old;

	while (*stack)
	{
		old = *stack;
		*stack = (*stack)->next;
		free(old);
	}
	free(*stack);
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst || !lst->next)
		return (lst);
	return (ft_lstlast(lst->next));
}
