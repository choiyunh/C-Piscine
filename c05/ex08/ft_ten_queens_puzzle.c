/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:27:20 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/16 16:35:23 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_location(int location[10])
{
	int	i;

	i = 0;
	while (i < 10)
		ft_putchar(location[i++] + '0');
	ft_putchar('\n');
}

int	is_possible(int location[10], int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (location[i] == location[col])
			return (0);
		else if ((col - i) == (location[i] - location[col]))
			return (0);
		else if ((col - i) == (location[col] - location[i]))
			return (0);
		i++;
	}
	return (1);
}

void	set_queens(int location[10], int col, int *total_way)
{
	int	row;

	if (col == 10)
	{
		*total_way += 1;
		print_location(location);
	}
	else
	{
		row = 0;
		while (row < 10)
		{
			location[col] = row;
			if (is_possible(location, col))
				set_queens(location, col + 1, total_way);
			row++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	location[10];
	int	total_way;

	total_way = 0;
	set_queens(location, 0, &total_way);
	return (total_way);
}
