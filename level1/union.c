#include <unistd.h>

int ft_union(char c, char *str, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j;
    int k;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (argv[1][i] && !ft_union(argv[1][i], argv[1], i))
                write(1, &argv[1][i], 1);
            i++;
        }
        j = 0;
        while (argv[2][j])
        {
            k = 0;
            while (argv[1][k] && argv[1][k] != argv[2][j])
                    k++;
            if (!argv[1][k] && !ft_union(argv[2][j], argv[2], j))
                write (1, &argv[2][j], 1);
            j++;
        }    
    }
    write (1, "\n", 1);
    return (0);
}
