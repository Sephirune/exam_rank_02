int	int_len(long int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long int	j;
	char		*str;
	int			len;

	j = nbr;
	len = int_len(j);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	if (j < 0)
	{
		str[0] = '-';
		j *= -1;
	}
	if (j == 0)
		str[0] = '0';
	while (j > 0)
	{
		str[--len] = j % 10 + '0';
		j /= 10;
	}
	return (str);
}