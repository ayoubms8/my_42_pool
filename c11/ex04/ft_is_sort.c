/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:07:00 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/23 15:07:05 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	skip_dup(int *tab, int i)
{
	while (tab[i] == tab[i + 1])
		i++;
	return (i);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	if (length < 3)
		return (1);
	i = skip_dup(tab, i);
	if (tab[i] > tab[i + 1])
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	if (tab[i] < tab[i + 1])
	{
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}

/*
int	ft_cmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	static int	tabx[] = {};
	int			index;
	int			*tab;
	int			length;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	printf("ft_is_sorted(1.........10) = %d\n", ft_is_sort(tab, length, &ft_cmp));
	index = 0;
	while (index < length)
	{
		tab[length - 1 - index] = index;
		index++;
	}
	printf("ft_is_sorted(10.........1) = %d\n", ft_is_sort(tab, length, &ft_cmp));
	tab[5] = 100;
	printf("ft_is_sorted(10...100...1) = %d\n", ft_is_sort(tab, length, &ft_cmp));
	tab[5] = 4;
	tab[9] = 100;
	printf("ft_is_sorted(10.....1.100) = %d\n", ft_is_sort(tab, length, &ft_cmp));
	printf("ft_is_sorted(.tabx.......) = %d\n", ft_is_sort(tabx, 13, &ft_cmp));
}
*/
