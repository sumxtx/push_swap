
#include "push_swap.h"

char **parse_av(int ac, char **av)
{
  char **splitted;

  //splitted = NULL;
  if (ac == 1 || (ac == 2 && !av[1][0]))
    exit(EXIT_FAILURE);
  else if (ac == 2)
  {
    splitted = _split_av_(av);
  }
  else
  {
    splitted = _dup_av_(ac, av);
  }
  return (splitted);
}

char **_split_av_(char **av)
{
  char **splitted;

  splitted = ft_split(av[1],' ');
  if(!splitted)
    exit(EXIT_FAILURE);

  return (splitted);
}

char **_dup_av_(int ac, char **av)
{
  int i;
  char **splitted;

  i = 0;
  splitted = (char **)malloc(ac * sizeof(char *));
  if(!splitted)
    exit(EXIT_FAILURE);
  ac--;
  while(i < ac)
  {
    splitted[i] = ft_strdup(av[i + 1]);
    if(!splitted[i])
      _ftfreewexit_(splitted, ac, 1);
    i++;
  }
  return splitted;
}
