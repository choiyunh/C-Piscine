/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:19:57 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/24 17:26:37 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			result++;
		i++;
	}
	return (result);
}
