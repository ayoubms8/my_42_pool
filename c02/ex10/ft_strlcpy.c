/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:24:18 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/07 18:24:20 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	k = 0;
	while (k < size - 1 && src[k])
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (i);
}
