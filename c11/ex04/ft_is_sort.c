/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:21:56 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/24 17:26:39 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	is_asc;
	int	is_desc;
	int	i;

	is_asc = 0;
	is_desc = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			is_asc = 1;
		else if (f(tab[i], tab[i + 1]) > 0)
			is_desc = 1;
		i++;
	}
	if (is_asc == is_desc && is_asc != 0)
		return (0);
	else
		return (1);
}
