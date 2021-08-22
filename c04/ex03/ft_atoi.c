/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:24:02 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/10 17:24:03 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	char	*spaces;
	int		i;

	i = 0;
	spaces = "\n\t\f\r\v ";
	while (spaces[i])
		if (spaces[i++] == c)
			return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	acc;
	int	sign;

	i = 0;
	acc = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	while (str[i] >= '0' && str[i] <= '9')
		acc = acc * 10 + (str[i++] - '0');
	if (sign == -1)
		return (-acc);
	else
		return (acc);
}
