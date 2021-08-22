/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:44:26 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/12 10:44:27 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	var;

	if (nb == 0)
		return (1);
	i = 1;
	var = nb;
	while (i != var)
	{
		nb *= var - i;
		i++;
	}
	return (nb);
}
