/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:28:46 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/22 17:29:13 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <limits.h>

/*
typedef struct s_list
{
	int				n;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list;*/

void	push_swap(t_list **a);

//  CHECK

int		check(char **str);
int		check_2(char **str);
int		check_3(char **str);

//  STACK - LIST

t_list	*create_stack(t_list	*stack, char **str);
t_list		*new_node(char *str);
void	link_stack(t_list *stack, t_list *new);


// MOVES
//		swap
void		swap(t_list **stack);
void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);
//		rotate
void		rotate(t_list **stack);
void		ra(t_list **a);
void		rb(t_list **b);
void		rr(t_list **a, t_list **b);
// 		rev_rotate
void	rev_rotate(t_list **stack);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
//		push
void	push(t_list **stack_add, t_list **stack_lost);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

//    SORT

int     sort_check(t_list *stack);
void    sort_3(t_list **stack);



#endif