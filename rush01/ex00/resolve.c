/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:13:12 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/13 17:04:24 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	find_zero(int map[4][4], int *row, int *col)
{
	*row = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (map[*row][*col] == 0)
				return (1);
			*col += 1;
		}
		*row += 1;
	}
	return (0);
}

int	is_dup_row(int map[4][4], int row, int value)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (map[row][col] == value)
			return (1);
		col++;
	}
	return (0);
}

int	is_dup_col(int map[4][4], int col, int value)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (map[row][col] == value)
			return (1);
		row++;
	}
	return (0);
}

int	is_duplication(int map[4][4], int row, int col, int value)
{
	if (!is_dup_row(map, row, value) && !is_dup_col(map, col, value))
		return (0);
	else
		return (1);
}

int	resolve_map(int map[4][4], int *input)
{
	int	row;
	int	col;
	int	i;

	i = 1;
	if (!find_zero(map, &row, &col) && check_map(map, input))
	{
		return (1);
	}
	while (i <= 4)
	{
		if (!is_duplication(map, row, col, i) && map[row][col] == 0)
		{
			map[row][col] = i;
			if (resolve_map(map, input))
				return (1);
			map[row][col] = 0;
		}
		i++;
	}
	return (0);
}
