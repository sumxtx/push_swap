
#include "push_swap.h"

int vector_len(char **s)
{
  int len;
  len = 0;
  while(s[len] != NULL)
  {
    len++;
  }
  return len;
}

void _ftfreewexit_(char **splitted, int size, int doexit)
{
  int i;

  i = 0;
  while(i < size)
  {
    free(splitted[i]);
    i++;
  }
  free(splitted);
  if(doexit == 1)
    exit(EXIT_FAILURE);
}

void _ftintfreewexit_(int *arr, int doexit)
{
  free(arr);
  if(doexit == 1)
    exit(EXIT_FAILURE);
}
