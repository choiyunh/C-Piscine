#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    int i = 0;
    while(str[i]){
        result = (result * 10) + (str[i] - '0');
        i++;
    }

    return result;
}

void ft_putchar(char c){
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int main(int argc, char **argv){
    (void)argc;
    (void)argv;

    printf("%d\n", ft_atoi("12341"));
    ft_putnbr(10012);
}