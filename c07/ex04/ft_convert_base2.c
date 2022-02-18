int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	flag_appear[256];
	int	i;

	i = 0;
	while (i < 256)
	{
		flag_appear[i] = 0;
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || flag_appear[(int)base[i]] == 1)
			return (0);
		if (check((int)base[i]))
			return (0);
		flag_appear[(int)base[i]] = 1;
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	get_remainder(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long long	ft_atoi_base(char *str, char *base)
{
    int			i;
	int			len;
	int			minus;
	long long	answer;

	i = 0;
	len = check_base(base);
	minus = 1;
	answer = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			minus *= -1;
	while (str[i] != '\0' && get_remainder(base, str[i]) != -1)
	{
		answer *= len;
		answer += get_remainder(base, str[i++]);
	}
	if (answer * minus > 2147483647 || answer * minus < -2147483648)
		return (2147483648);
	return (answer * minus);
}