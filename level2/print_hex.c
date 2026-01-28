#include <unistd.h>

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

void print_hex(int nb)
{
    char hex[] = "0123456789abcdef";
    if (nb >= 16)
        print_hex(nb / 16);
    write(1, &hex[nb % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}