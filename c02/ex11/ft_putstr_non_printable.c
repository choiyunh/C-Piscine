/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:37:45 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/08 16:26:11 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		negative;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str <= 31 || *str >= 127)
		{
			write(1, "\\", 1);
			if (*str < 0)
			{
				negative = 256 + *str;
				write(1, &hex[negative / 16], 1);
				write(1, &hex[negative % 16], 1);
			}
			else
			{
				write(1, &hex[*str / 16], 1);
				write(1, &hex[*str % 16], 1);
			}
		}
		else
			write(1, str, 1);
		str++;
	}
}
