#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    int first_word_start;
    int first_word_end;

    if (argc > 1)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        first_word_start = i;
        while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            i++;
        first_word_end = i;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                    i++;
                if (argv[1][i])
                    ft_putchar(' ');
            }
            else
            {
                ft_putchar(argv[1][i]);
                i++;
            }
        }
        if (first_word_start != first_word_end)
        {
            if (argv[1][first_word_end])
                ft_putchar(' ');
            while (first_word_start < first_word_end)
            {
                ft_putchar(argv[1][first_word_start]);
                first_word_start++;
            }
        }
    }
    ft_putchar('\n');
    return (0);
}
