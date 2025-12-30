#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
  int i = 0;
  int len;
  int *tab;
  if (start < end)
    len = end - start + 1;
  else
    len = start - end + 1;
  tab = malloc(len * sizeof(int));
  if (!tab)
    return (0);
  while (i < len)
    {
      if (start < end)
	      tab[i] = end - i;
      else
	      tab[i] = end + i;
      i++;
    }
  return (tab);
}

/* int main(void){
  int *tab;
  long int i;
  int len;
  tab = ft_rrange(-1, 2);
    len = 2 - (-1);
  for (i = 0; i <= len; i++)
    printf("%d\n", tab[i]);
  free(tab);
} */