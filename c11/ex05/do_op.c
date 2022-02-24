/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:17:24 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/24 17:21:28 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_zero(char *op, char *num)
{
	if (!ft_strcmp(op, "/") && (ft_atoi(num) == 0))
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	else if (!ft_strcmp(op, "%") && (ft_atoi(num) == 0))
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

int	get_result(char **av)
{
	int	(*fp[5])(int, int);
	int	result;

	fp[0] = &ft_add;
	fp[1] = &ft_sub;
	fp[2] = &ft_div;
	fp[3] = &ft_mul;
	fp[4] = &ft_mod;
	result = 0;
	if (!ft_strcmp(av[2], "+"))
		result = fp[0](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "-"))
		result = fp[1](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "/"))
		result = fp[2](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "*"))
		result = fp[3](ft_atoi(av[1]), ft_atoi(av[3]));
	else if (!ft_strcmp(av[2], "%"))
		result = fp[4](ft_atoi(av[1]), ft_atoi(av[3]));
	return (result);
}

int	main(int ac, char **av)
{
	int	result;

	if (ac != 4 || check_zero(av[2], av[3]))
		return (1);
	result = get_result(av);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
