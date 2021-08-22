/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:44:42 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/12 10:44:43 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	p = nb;
	i = power - 1;
	while (i)
	{
		nb *= p;
		i--;
	}
	return (nb);
}
