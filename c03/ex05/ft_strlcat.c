/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:39:31 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/09 19:27:45 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (*src && (i + 1 < size))
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	if (dest_size > size)
		return (src_size + size);
	else
		return (src_size + dest_size);
}
