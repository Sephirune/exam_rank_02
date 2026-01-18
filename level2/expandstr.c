#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int check = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            if (argv[1][i])
            {
                if (check)
                    write(1, "   ", 3);
                while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
                check = 1;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}