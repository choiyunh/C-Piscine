/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunjilee <eunjilee@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:28:37 by eunjilee          #+#    #+#             */
/*   Updated: 2022/02/06 16:53:18 by yunhchoi         ###   ########.fr       */
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
				print_line(x, 'A', 'B', 'A');
			else if (i == y - 1)
				print_line(x, 'C', 'B', 'C');
			else
				print_line(x, 'B', ' ', 'B');
			write(1, "\n", 1);
			i++;
		}
	}
}
