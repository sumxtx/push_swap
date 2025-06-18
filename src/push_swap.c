
#include "push_swap.h"

int main(int ac, char **av)
{
  int *int_arr;
  char **splitted;

  splitted = parse_av(ac, av);
  ac = vector_len(splitted);
  int_arr = convert_int(splitted, ac);
  _ftfreewexit_(splitted, ac, 0);
  //sort_stack
  for(int i = 0; i < ac; i++)
  {
    printf("%d ", int_arr[i]);
  }
  printf("\n.");

  return(EXIT_SUCCESS);
}
