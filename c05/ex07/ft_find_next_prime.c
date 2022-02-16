/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:47:30 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/16 15:50:43 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (!is_prime(nb))
		nb += 1;
	return (nb);
}
