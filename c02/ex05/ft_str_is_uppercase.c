/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:22:53 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/07 18:22:55 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_not_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_not_uppercase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
