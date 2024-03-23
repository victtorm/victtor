/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:13:26 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/31 12:43:09 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	while ((n * n < nb) && (n <= 46340))
		n++;
	if (n * n == nb)
		return (n);
	return (0);
}