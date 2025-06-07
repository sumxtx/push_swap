#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libftall.h"

int putstr_fd(const char *s, int fd)
{
  int len = ft_strlen(s);
  write(fd, s, len);
}
 int vector_len(const char **s)
{
  int len;
  len = 0;
  while(s[len] != NULL)
  {
    len++;
  }
  return len;
}

int main(int ac, char **av)
{
  char **splitted;

  if (ac == 1) // only progr name
    exit(EXIT_FAILURE);
  if (ac == 2) // maybe a string "12 23 45"
  {
    splitted = ft_split(av[1],' ');
    if(!splitted)
      exit(EXIT_FAILURE);
  }
  if (splitted)
    ac = vector_len((const char**)splitted);
  while(ac)
  {
    ac--;
    printf("%d", ft_atoi(splitted[ac]));
  }
  return(EXIT_SUCCESS);
}
