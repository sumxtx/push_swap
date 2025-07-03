#include "push_swap.h"

int main(int ac, char **av)
{
  int *int_arr;
  char **splitted;

  splitted = parse_av(ac, av);
  ac = vector_len(splitted);
  int_arr = convert_int(splitted, ac);
  _ftfreewexit_(splitted, ac, 0);
  sort_stack_manual_test(int_arr, ac);

  return(EXIT_SUCCESS);
}
