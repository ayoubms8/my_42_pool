/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:24:11 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/10 17:24:12 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		;
	return (--i);
}

int	is_invalide(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (ft_strlen(str) <= 1)
		return (1);
	while (str[i])
	{
		while (str[k])
		{
			if (str[k] == str[i] && i != k)
				return (1);
			k++;
		}
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	long int	i;

	if (is_invalide(base))
	{
		return ;
	}
	i = nb;
	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
	}
	if (i <= ft_strlen(base) - 1)
	{
		ft_putchar(base[i]);
	}
	else
	{
		ft_putnbr_base(i / ft_strlen(base), base);
		ft_putnbr_base(i % ft_strlen(base), base);
	}
}
