/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:08:02 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/23 15:08:03 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][1] != '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(ft_calc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3])));
	ft_putchar('\n');
}
