#include "push_swap.h"

int get_max_digits(t_int_lst *stack)
{
  if(!stack || !stack->first)
    return 0;
  int max;
  int digits;
  t_int_lst_node *iter;

  iter = stack->first;
  max = iter->content;
  while(iter)
  {
    if(max < 0)
      max *= -1;
    if(iter->content > max)
      max = iter->content;
    iter = iter->next;
  }
  digits = 0;
  while(max)
  {
    max /= 10;
    digits++;
  }
  return digits;
}
