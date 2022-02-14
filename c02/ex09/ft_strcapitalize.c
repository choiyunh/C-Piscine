/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhchoi <yunhchoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:13:59 by yunhchoi          #+#    #+#             */
/*   Updated: 2022/02/08 17:13:50 by yunhchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_to_lowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*temp)
	{
		if (*temp >= 'A' && *temp <= 'Z')
			*temp += 32;
		temp++;
	}
	return (str);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_lowcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_to_lowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (ft_is_lowcase(str[i]))
				str[i] -= 32;
		}
		else if (!ft_is_alpha(str[i - 1]) && !ft_is_numeric(str[i - 1]))
		{
			if (ft_is_lowcase(str[i]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
