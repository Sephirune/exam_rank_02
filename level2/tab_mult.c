#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int n = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = (n * 10) + (str[i] - '0');
        i++;
    }
    return (n);
}

void putnbr(int nb)
{
    if (nb >= 10)
    {
        putnbr(nb / 10);
        putnbr(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

void tab_mult(char *str)
{
    int n = ft_atoi(str);
    int i = 1;
    while (i <= 9)
    {
        putnbr(i);
        ft_putchar('*');
        putnbr(n);
        ft_putchar('=');
        putnbr(i * n);
        ft_putchar('\n');
        i++;
    }
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}