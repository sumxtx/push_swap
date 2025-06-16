
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

void _ftfree_(char **splitted, int size)
{
  int i;

  i = 0;
  while(i < size)
  {
    free(splitted[i]);
    i++;
  }
  free(splitted);
  exit(EXIT_FAILURE);
}
