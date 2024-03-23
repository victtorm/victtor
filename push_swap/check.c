/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:10:18 by vbritto-          #+#    #+#             */
/*   Updated: 2024/03/22 18:21:59 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Terceiro check verifica se os valores estao dentro do int max e min
int	check_3(char **str)
{
	int long	n;

	while (*str)
	{
		n = ft_atol(*str);
		if ((n < INT_MIN) || (n > INT_MAX))
		{
			ft_printf("Error\n");
			return (0);
		}
		str++;
	}
	return (1);
}

//Segundo Check verifica se existe repeticao de int
int	check_2(char **str)
{
	int		j;
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		j = i + 1;
		while (str[j] != NULL)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
			{
				ft_printf("Error\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	if (!check_3(str))
		return (0);
	return (1);
}

//Primeiro Check se todos os elemntos sao INT e verificacao de sinais//
int	check(char **str)
{
	int		i;
	int		j;
	
	j = 0;		
	while (str[j] != NULL)
	{
		i = 0;
		if ((str[j][0] == 43 || str[j][0] == 45) &&
		(str[j][1] >= 48) && (str[j][1] <= 57))
			i++;
		while (str[j][i] != '\0')
		{	
			if (str[j][i] < 48 || str[j][i] > 57)
			{
				ft_printf("Error\n");
				return (0);
			}
			i++;
		}
		j++;
	}
	if (!check_2(str))
		return (0);
	return (1);
}
