/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:19:42 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/17 10:19:43 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_space(char c)
{
	char	*spaces;
	int		i;

	spaces = "\n\t\f\r\v ";
	i = 0;
	while (spaces[i])
		if (spaces[i++] == c)
			return (1);
	return (0);
}

int	get_o_check_c_in_base(char c, char *base, int which_function)
{
	int	i;

	i = 0;
	if (which_function == 1)
	{
		while (base[i] && c != base[i])
			i++;
		return (i);
	}
	else
	{
		while (base[i])
			if (c == base[i++])
				return (1);
		return (0);
	}
}

int	is_invalide(char *str)
{
	int	i;
	int	k;

	i = 0;
	if (ft_strlen(str) <= 1)
		return (1);
	while (str[i])
	{
		k = 0;
		while (str[k])
		{
			if (str[k] == str[i] && i != k)
				return (1);
			k++;
		}
		if (str[i] == '+' || str[i] == '-' || is_space(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	acc;
	int	sign;

	acc = 0;
	sign = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	while (get_o_check_c_in_base(str[i], base, 2))
		acc = acc * ft_strlen(base) + get_o_check_c_in_base(str[i++], base, 1);
	if (sign == -1)
		return (-acc);
	else
		return (acc);
}
