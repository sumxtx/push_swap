
#include "push_swap.h"

int main(int ac, char **av)
{
  char **splitted;

  splitted = parse_av(ac, av);
  ac = vector_len(splitted);

  _ftfree_(splitted, ac);

  return(EXIT_SUCCESS);
}
