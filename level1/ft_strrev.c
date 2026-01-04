char	*ft_strrev(char *str)
{
	int i = 0;
	char temp;
	int last;
	while (str[i])
		i++;
	last = i - 1;
	i = 0;
	while (i < last)
	{
		temp = str[i];
		str[i] = str[last];
		str[last] = temp;
		i++;
		last--;
	}
	return (str);
}


/* #include <stdio.h>
int	main(void)
{
	char str[] = "hola";
	ft_strrev(str);
	printf("%s\n", str);
} */