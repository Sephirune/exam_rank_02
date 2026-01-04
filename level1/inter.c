#include <unistd.h>

int	ft_inter(int max, char *str, char c)
{
	int	i;

	i = 0;
	while (i < max)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 3)
	{	
		i = 0;
			j = 0;
			while (argv[2][j] && argv[1][i] != argv[2][j])
				j++;
			while (argv[1][i] && !ft_inter(i, argv[2], argv[2][j]))
			{
					write (1, &argv[1][i], 1);
					i++;
			}
	}
	write (1, "\n", 1);
	return (0);
}
