/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:05:44 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/15 13:05:45 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	get_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;
	int	j;
	int	s;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			total_length++;
		}
		i++;
		s = 0;
		while (sep[s++])
			total_length++;
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*arr;
	int		j;
	int		k;
	int		s;

	i = 0;
	k = 0;
	arr = (char *)malloc(sizeof(char) * get_total_length(size, strs, sep));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[k++] = strs[i][j++];
		s = 0;
		if (i < size - 1)
			while (sep[s])
				arr[k++] = sep[s++];
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
