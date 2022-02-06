#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result_div;
	int	result_mod;

	result_div = *a / *b;
	result_mod = *a % *b;
	*a = result_div;
	*b = result_mod;
}
