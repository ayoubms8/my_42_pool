/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:19:48 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/17 10:19:55 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);
int	is_space(char c);
int	get_o_check_c_in_base(char c, char *base, int which_function);
int	is_invalide(char *str);
int	ft_atoi_base(char *str, char *base);

int	get_num_of_digits(int i, char *base)
{
	int	k;

	k = 0;
	while (i >= ft_strlen(base))
	{
		i /= ft_strlen(base);
		k++;
	}
	return (k);
}

void	fill_string(int i, int k, char *base, char *arr)
{
	int	mod;

	while (k >= 0)
	{
		mod = i % ft_strlen(base);
		arr[k] = base[mod];
		i /= ft_strlen(base);
		k--;
	}
}

char	*convert_base(int nb, char *base)
{
	long int	i;
	char		*arr;
	int			k;
	int			c;

	i = nb;
	k = 0;
	if (i < 0)
	{
		i = -i;
		k++;
	}
	k += get_num_of_digits(i, base);
	arr = (char *)malloc(sizeof(char) * (k + 1));
	if (arr == ((void *)0))
		return ((void *)0);
	c = k + 1;
	fill_string(i, k, base, arr);
	if (nb < 0)
		arr[0] = '-';
	arr[c] = '\0';
	return (arr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	if (is_invalide(base_from) || is_invalide(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	return (convert_base(n, base_to));
}
