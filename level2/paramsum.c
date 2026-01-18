#include <unistd.h>

void esc(char c)
{
    write(1, &c, 1);
}

void putnbr(int nb)
{
    if (nb > 9)
    {
        putnbr(nb / 10);
        putnbr(nb % 10);
    }
    else
        esc(nb + '0');
}

int main(int argc, char **argv)
{
    (void)argv;
    putnbr(argc - 1);
    write(1, "\n", 1);
    return (0);
}