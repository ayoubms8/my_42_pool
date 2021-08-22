/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:19:51 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/10 09:19:51 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (s1[i])
		i++;
	while (s2[k] && k < n)
	{
		s1[i++] = s2[k++];
	}
	s1[i] = '\0';
	return (s1);
}
