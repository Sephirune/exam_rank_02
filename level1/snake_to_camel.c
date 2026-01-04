#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	c;
	int		upper;

	if (ac == 2)
	{
		i = 0;
		upper = 0;
		while (av[1][i])
		{
			c = av[1][i];
			if (c == '_') // si se encuentra '_' no la escribimos y la siguiente va en mayúscula. 
				upper = 1;
			else
			{
				if (upper && c >= 'a' && c <= 'z')
					c -= 32;
				write(1, &c, 1);
				upper = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}