/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:57:06 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/06 16:53:06 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int col, char left, char line, char right)
{
	ft_putchar(left);
	while (--col > 1)
		ft_putchar(line);
	if (col)
		ft_putchar(right);
}

void	rush(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
		return ;
	else
	{
		i = 0;
		while (i < y)
		{
			if (i == 0)
				print_line(x, '/', '*', '\\');
			else if (i == y - 1)
				print_line(x, '\\', '*', '/');
			else
				print_line(x, '*', ' ', '*');
			write(1, "\n", 1);
			i++;
		}
	}
}
