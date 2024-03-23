/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:41:03 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/22 15:23:41 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;

	a = NULL;
	if (argc <= 2)
	{
		if (argc == 1 || argv[1][0] == '\0')
			return (0);
		argv = ft_split(argv [argc - 1], ' ');
		if (argv[0] == NULL)
		{
			ft_printf("Error\n");
			return (0);
		}
	}
	else
		argv++;
	if (!check(argv))
	{
		return (0);
	}
	a = create_stack(a, argv);
	push_swap(&a);
	return (0);
}