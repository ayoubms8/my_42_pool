/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemsafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:15:11 by alemsafi          #+#    #+#             */
/*   Updated: 2021/08/21 10:15:12 by alemsafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*create_word(char *str, int i, int j)
{
	char	*word;
	int		o;

	o = 0;
	word = (char *)malloc(sizeof(char) * (j - i));
	if (word == ((void *)0))
		return ((void *)0);
	while (i < j)
	{
		word[o] = str[i];
		i++;
		o++;
	}
	word[o] = '\0';
	return (word);
}

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (is_in_charset(str[i], charset))
		i++;
	while (str[i])
	{
		if (str[i] && !(is_in_charset(str[i], charset)))
		{
			word_count++;
			while (str[i] && !(is_in_charset(str[i], charset)))
				i++;
		}
		i++;
	}
	return (word_count);
}

int	fill_array(int word_count, char *str, char *charset, char **arr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (k < word_count)
	{
		while (is_in_charset(str[i], charset) && str[i])
			i++;
		j = i;
		while (!(is_in_charset(str[j], charset)) && str[j])
			j++;
		arr[k] = create_word(str, i, j);
		i = j + 1;
		k++;
	}
	return (k);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		k;

	arr = (char **)malloc(sizeof(char *) * (ft_word_count(str, charset) + 1));
	if (arr == ((void *)0))
		return ((void *)0);
	k = fill_array(ft_word_count(str, charset), str, charset, arr);
	arr[k] = 0;
	return (arr);
}
