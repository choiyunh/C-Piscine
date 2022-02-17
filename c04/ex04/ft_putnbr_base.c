/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:39:15 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/10 19:16:16 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len_base;
	unsigned int	new_nbr;

	new_nbr = (unsigned int)nbr;
	len_base = ft_strlen(base);
	if (!check_base(base))
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		new_nbr = 4294967296 - new_nbr;
	}
	if (new_nbr >= len_base)
		ft_putnbr_base(new_nbr / len_base, base);
	ft_putchar(base[new_nbr % len_base]);
}
