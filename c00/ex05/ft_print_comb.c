/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:09:45 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/10 13:51:05 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check(char a_, char b_, char c_)
{
	if (!(a_ == '7' && b_ == '8' && c_ == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	str[3];

	str[0] = '0';
	while (str[0] <= '7')
	{
		str[1] = str[0] + 1;
		while (str[1] <= '8')
		{
			str[2] = str[1] + 1;
			while (str[2] <= '9')
			{
				write(1, &str[0], 1);
				write(1, &str[1], 1);
				write(1, &str[2], 1);
				check(str[0], str[1], str[2]);
				str[2]++;
			}
			str[1]++;
		}
		str[0]++;
	}
}
