/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:43:28 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/16 15:47:09 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	num;

	num = 2;
	if (nb <= 1)
		return (0);
	while (num * num <= nb)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}
