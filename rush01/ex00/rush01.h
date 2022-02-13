/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:26:59 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/13 17:31:31 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <unistd.h>

int		validate_input(int argc, char **argv);
void	get_input(char **argv, int *input);
void	map_init(int map[4][4]);
void	fix_row(int i_input, int *input, int map[4][4]);
void	fix_col(int i_input, int *input, int map[4][4]);
void	fixation(int *input, int map[4][4]);
int		check_map(int map[4][4], int *input);
int		resolve_map(int map[4][4], int *input);
void	print_map(int map[4][4]);
#endif
