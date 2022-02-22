/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:59:50 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/22 19:42:20 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_in_charset(char c, char *charset)
{
	int	idx;

	idx = 0;
	while (charset[idx])
	{
		if (c == charset[idx])
			return (1);
		idx++;
	}
	return (0);
}

int	get_num_words(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (*str && is_in_charset(*str, charset))
			str++;
		if (*str && !is_in_charset(*str, charset))
		{
			cnt++;
			while (*str && !is_in_charset(*str, charset))
				str++;
		}
	}
	return (cnt);
}

char	*allocate_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_in_charset(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !is_in_charset(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;

	i = 0;
	result = (char **)malloc(sizeof(char *) * (get_num_words(str, charset)
				+ 1));
	while (*str)
	{
		while (*str && is_in_charset(*str, charset))
			str++;
		if (*str && !is_in_charset(*str, charset))
		{
			result[i++] = allocate_word(str, charset);
			while (*str && !is_in_charset(*str, charset))
				str++;
		}
	}
	result[i] = 0;
	return (result);
}
