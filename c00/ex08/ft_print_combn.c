/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:10:22 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/06 17:53:42 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_is_first;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	combination(int n_, int arr_[10], int index_, int value_)
{
	int	i_;

	i_ = 0;
	if (n_ == 0)
	{
		if (!g_is_first)
			write(1, ", ", 2);
		while (i_ < index_)
		{
			ft_putchar(arr_[i_] + '0');
			i_++;
			g_is_first = 0;
		}
	}
	else
	{
		if (value_ <= 9)
		{
			arr_[index_] = value_;
			combination(n_ - 1, arr_, index_ + 1, value_ + 1);
			combination(n_, arr_, index_, value_ + 1);
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	g_is_first = 1;
	combination(n, arr, 0, 0);
}
