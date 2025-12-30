#include <unistd.h>

void esc(char c)
{
    write (1, &c, 1);
}

void putnbr(char nb)
{
    long int i;
    i = nb;
    if (i > 9)
    {
        putnbr(i / 10);
        putnbr(i % 10);
    }
    else
        esc(i + '0');
}

int main(void)
{
    int i;
    i = 1;
    while (i <= 100)
    {   
         if (i % 3 == 0 && i % 5 == 0)
            write(1, "FizzBuzz", 8);
        else if (i % 3 == 0)
            write (1, "Fizz", 4);
        else if (i % 5 == 0)
            write (1, "Buzz", 4);
        else
            putnbr(i);
        write (1, "\n", 1);
         i++;
    }
    return (0);
}