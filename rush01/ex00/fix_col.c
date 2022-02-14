/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_col.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:01:35 by jaewlee           #+#    #+#             */
/*   Updated: 2022/02/13 21:57:50 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	col_case_1(int i_col, int map[4][4])
{
	map[0][i_col] = 1;
	map[1][i_col] = 2;
	map[2][i_col] = 3;
	map[3][i_col] = 4;
}

void	col_case_2(int i_col, int map[4][4])
{
	map[0][i_col] = 4;
	map[1][i_col] = 3;
	map[2][i_col] = 2;
	map[3][i_col] = 1;
}

void	fix_col(int i_input, int *input, int map[4][4])
{
	if (input[i_input] == 4)
		col_case_1(i_input, map);
	if (input[i_input + 4] == 4)
		col_case_2(i_input, map);
	if (input[i_input] == 1)
	{
		map[0][i_input] = 4;
		if (input[i_input + 4] == 2)
			map[3][i_input] = 3;
	}
}
