#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char    *str;
	int	    i;
	int	    cnt;

	cnt = ft_strlen(strs[0]);
	i = 1;
	while (i < size)
	{
		cnt += ft_strlen(sep);
		cnt += ft_strlen(strs[i]);
		i++;
	}
	str = (char *)((malloc)(sizeof(char) * cnt + 1));
	*str = '\0';
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i == size - 1)
            break;
		str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}