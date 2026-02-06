#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int end;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
            i++;

        while (i > 0)
        {
            while (i > 0 && (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0'))
                i--;
            end = i;
            while (i > 0 && argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t')
                i--;
            write(1, &argv[1][i], end - i + 1);
            if (i > 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    return (0);
}
