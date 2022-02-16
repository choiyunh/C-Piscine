/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:38:54 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/09 19:18:40 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*origin;

	i = 0;
	origin = dest;
	while (*dest)
		dest++;
	while (*src && i++ < nb)
		*dest++ = *src++;
	*dest++ = '\0';
	return (origin);
}
