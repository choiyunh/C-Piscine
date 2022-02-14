/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:02:19 by jaewlee           #+#    #+#             */
/*   Updated: 2022/02/13 21:37:36 by jaewlee          ###   ########.fr       */
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
	while (row < 4)
	{
		while (col < 4)
		{
			ft_putchar(map[row][col] + '0');
			if (col != 3)
				ft_putchar(' ');
			++col;
		}
		ft_putchar('\n');
		col = 0;
		++row;
	}
}
