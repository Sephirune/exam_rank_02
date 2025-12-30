#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        int last = i - 1;
        while (last >= 0)
        {
            write(1, &argv[1][last], 1);
            last--;
        }
    }
    write(1, "\n", 1);
    return (0);
}