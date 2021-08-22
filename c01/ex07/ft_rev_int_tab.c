/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:50:00 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/05 17:50:02 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	arr[42069];
	int	i;
	int	max;

	max = size;
	i = 0;
	while (max)
	{
		arr[i] = tab[i];
		i++;
		max--;
	}
	i = 0;
	while (size)
	{
		size--;
		tab[size] = arr[i];
		i++;
	}
}
