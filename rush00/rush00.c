#include <unistd.h>

void	print_line(char left, char line, char right, int col)
{
	ft_putchar(left);
	while (--col > 1)
		ft_putchar(line);
	if (col)
		ft_putchar(right);
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		i = 0;
		while (i < y)
		{
			if (i == 0)
				print_line('o', '-', 'o', x);
			else if (i == y - 1)
				print_line('o', '-', 'o', x);
			else
				print_line('|', ' ', '|', x);
			i++;
			write(1, "\n", 1);
		}
	}
}
