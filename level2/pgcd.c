#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
    int div = a;
    while (div > 0)
    {
        if (a % div == 0 && b % div == 0)
        {    
            printf("%d", div);
            break;
        }
        div--;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        pgcd(atoi(argv[1]), atoi(argv[2]));
    write(1, "\n", 1);
    return (0);
}
