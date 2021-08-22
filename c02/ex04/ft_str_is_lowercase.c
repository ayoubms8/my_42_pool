/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:23:02 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/07 18:23:03 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_not_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_not_lowercase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
