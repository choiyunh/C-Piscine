/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:00:50 by jaewlee           #+#    #+#             */
/*   Updated: 2022/02/13 21:44:59 by jaewlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	fixation(int *input, int map[4][4])
{
	int	i_input;

	map_init(map);
	i_input = 0;
	while (i_input < 16)
	{
		if (i_input < 4)
			fix_col(i_input, input, map);
		if ((i_input >= 8) && (i_input < 12))
			fix_row(i_input, input, map);
		++i_input;
	}
}
