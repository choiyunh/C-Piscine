/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:02:19 by jaewlee           #+#    #+#             */
/*   Updated: 2022/02/13 16:22:09 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_map(int map[4][4])
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (col < 4)
	{
		while (row < 4)
		{
			ft_putchar(map[col][row] + '0');
			if (row != 3)
				ft_putchar(' ');
			++row;
		}
		ft_putchar('\n');
		row = 0;
		++col;
	}
}
