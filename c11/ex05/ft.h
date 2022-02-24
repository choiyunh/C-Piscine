/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:14:18 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/24 16:38:11 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mul(int a, int b);
int		ft_mod(int a, int b);

int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
