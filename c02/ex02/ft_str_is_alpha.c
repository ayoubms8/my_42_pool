/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:21:30 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/07 18:21:40 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_not_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_not_alpha(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
