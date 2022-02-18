#include <unistd.h>
#include <stdlib.h>

int			ft_strlen(char *str);
int			check(char c);
int			check_base(char *base);
int			find(char *str, char c);
long long	ft_atoi_base(char *str, char *base);
char		*g_str;
int			g_idx;

void	print_base(int n, char *base, int len)
{
	if (n >= len)
		print_base(n / len, base, len);
	g_str[g_idx++] = base[n % len];
}

void	ft_putnbr_base(long long nbr, char *base)
{
	int	len;

	len = check_base(base);
	g_idx = 0;
	if (len == 0)
		return ;
	if (nbr == -2147483648)
	{
		g_str[g_idx++] = '-';
		nbr *= -1;
		print_base(nbr / len, base, len);
		g_str[g_idx++] = base[nbr % len];
		return ;
	}
	if (nbr < 0)
	{
		g_str[g_idx++] = '-';
		nbr = nbr * -1;
	}
	print_base(nbr, base, len);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	nbr_int;

	g_str = (char *)((malloc)(sizeof(char) * 33));
	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	if (ft_atoi_base(nbr, base_from) == 2147483648)
    	return (NULL);
	else
    {
        nbr_int = ft_atoi_base(nbr, base_from);
		ft_putnbr_base(nbr_int, base_to);
		g_str[g_idx] = '\0';
		return (g_str);
    }

	return (g_str);
}