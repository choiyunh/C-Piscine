/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:38:00 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/16 19:27:57 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	num;

	num = 1;
	if (nb <= 0)
		return (0);
	while (num * num <= nb)
		num++;
	if (num * num == nb)
		return (num);
	return (0);
}
