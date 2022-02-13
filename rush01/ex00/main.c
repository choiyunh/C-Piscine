/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:17:49 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/13 17:24:27 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	map[4][4];
	int	input[16];

	if (!(validate_input(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	get_input(argv, input);
	fixation(input, map);
	if (resolve_map(map, input))
		print_map(map);
	else
		write(1, "Error\n", 6);
	return (0);
}
