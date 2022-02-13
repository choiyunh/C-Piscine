/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:15:45 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/13 20:10:19 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate_input(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (0);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < '1' || '4' < argv[1][i])
				return (0);
		}
		else
		{
			if (argv[1][i] != ' ')
				return (0);
		}
		i++;
	}
	if (i == 31)
		return (1);
	else
		return (0);
}

void	get_input(char **argv, int *input)
{
	int	idx;
	int	i;

	i = 0;
	idx = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0)
		{
			input[idx] = argv[1][i] - '0';
			idx++;
		}
		i++;
	}
}
