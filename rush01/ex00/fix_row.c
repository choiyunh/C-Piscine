/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_row.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:01:17 by jaewlee           #+#    #+#             */
/*   Updated: 2022/02/13 19:44:02 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	row_case_1(int i_col, int map[4][4])
{
	map[i_col][0] = 1;
	map[i_col][1] = 2;
	map[i_col][2] = 3;
	map[i_col][3] = 4;
}

void	row_case_2(int i_col, int map[4][4])
{
	map[i_col][0] = 4;
	map[i_col][1] = 3;
	map[i_col][2] = 2;
	map[i_col][3] = 1;
}

void	fix_row(int i_input, int *input, int map[4][4])
{
	if (input[i_input] == 4)
		row_case_1(i_input % 4, map);
	if (input[i_input + 4] == 4)
		row_case_2(i_input % 4, map);
	if (input[i_input] == 1)
	{
		map[i_input % 4][0] = 4;
		if (input[i_input + 4] == 2)
			map[i_input % 4][3] = 3;
	}
}
