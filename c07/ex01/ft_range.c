/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:05:27 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/15 13:05:27 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	k;
	int	m;

	k = 0;
	m = min;
	if (max > min)
		arr = (int *)malloc(sizeof(int) * (max - min));
	else
		return (NULL);
	while (k < max - min)
	{
		arr[k] = m;
		k++;
		m++;
	}
	return (arr);
}
