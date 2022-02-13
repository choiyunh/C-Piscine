/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:15:02 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/13 20:12:16 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_colup(int map[4][4], int y, int col, int *input)
{
	int	row;
	int	cur_max;
	int	num_building;

	row = 0;
	cur_max = map[row][col];
	num_building = 1;
	while (row < y - 1)
	{
		if (map[row][col] < map[row + 1][col])
		{
			if (cur_max < map[row + 1][col])
			{
				cur_max = map[row + 1][col];
				num_building++;
			}
		}
		row++;
	}
	if (num_building != input[col + 0])
		return (0);
	else
		return (1);
}

int	check_coldown(int map[4][4], int y, int col, int *input)
{
	int	row;
	int	cur_max;
	int	num_building;

	row = y - 1;
	cur_max = map[row][col];
	num_building = 1;
	while (row > 0)
	{
		if (map[row][col] < map[row - 1][col])
		{
			if (cur_max < map[row - 1][col])
			{
				cur_max = map[row - 1][col];
				num_building++;
			}
		}
		row--;
	}
	if (num_building != input[col + 4])
		return (0);
	else
		return (1);
}

int	check_rowleft(int map[4][4], int x, int row, int *input)
{
	int	col;
	int	cur_max;
	int	num_building;

	col = 0;
	cur_max = map[row][col];
	num_building = 1;
	while (col < x)
	{
		if (map[row][col] < map[row][col + 1])
		{
			if (cur_max < map[row][col + 1])
			{
				cur_max = map[row][col + 1];
				num_building++;
			}
		}
		col++;
	}
	if (num_building != input[row + 8])
		return (0);
	else
		return (1);
}

int	check_rowright(int map[4][4], int x, int row, int *input)
{
	int	col;
	int	cur_max;
	int	num_building;

	col = x - 1;
	cur_max = map[row][col];
	num_building = 1;
	while (col > 0)
	{
		if (map[row][col] < map[row][col - 1])
		{
			if (cur_max < map[row][col - 1])
			{
				cur_max = map[row][col - 1];
				num_building++;
			}
		}
		col--;
	}
	if (num_building != input[row + 12])
		return (0);
	else
		return (1);
}

int	check_map(int map[4][4], int *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_rowleft(map, 4, i, input))
			return (0);
		if (!check_rowright(map, 4, i, input))
			return (0);
		if (!check_colup(map, 4, i, input))
			return (0);
		if (!check_coldown(map, 4, i, input))
			return (0);
		i++;
	}
	return (1);
}
