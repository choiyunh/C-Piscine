#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
		result[i++] = min++;
	return (result);
}