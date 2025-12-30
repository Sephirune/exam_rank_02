#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *tab;
    int len;
    int i = 0;

    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;
    tab = malloc(len * sizeof(int));
    if (!tab)
        return (0);
    while (i < len)
    {
        if (start <= end)
            tab[i] = start + i;
        else
            tab[i] = start - i;
        i++;
    }
    return (tab);
}

/* #include <stdio.h>
int	main(void)
{
	int	min = 0;
	long int	max = 10;
	int	i = 0;
	int	*range = ft_range(min, max);
	int	tamaño = max - min;
	while (i <= tamaño)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return(0);
} */