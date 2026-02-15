#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    int div = 2;
    int first = 1;

    if (argc == 2)
    {
        n = atoi(argv[1]);
        if (n == 1)
            printf("1");
        else
        {
            while (n >= div)
            {
                if (n % div == 0)
                {
                    if (!first)
                        printf("*");
                    printf("%d", div);
                    n /= div;
                    first = 0;
                }
                else
                    div++;
            }
        }
    }
    printf("\n");
    return (0);
}