/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:24:30 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/07 18:24:32 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(char c)
{
	char	*hex;
	int		n;

	if (c < 0)
		n = c + 256;
	else
		n = c;
	hex = "0123456789abcdef";
	if (n > 16)
	{
		ft_print_hexa(n / 16);
		ft_print_hexa(n % 16);
	}
	else
	{
		write(1, &hex[(int)n], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
		{
			write(1, "\\", 1);
			if (str[i] < 16 && str[i] >= 0)
				write(1, "0", 1);
			ft_print_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
