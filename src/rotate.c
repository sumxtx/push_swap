#include "push_swap.h"

int rotate(t_int_lst *src)
{
  t_int_lst_node *holder;
  if(src->counter < 2)
    return(-1);

  holder = src->first;
  src->first = holder->next;
  holder->next = NULL;
  src->last->next = holder;
  src->last = holder;

  return (1);
}


int ra(t_int_lst  *stack_a)
{
  if(stack_a->counter >= 3)
  {
    if(rotate(stack_a) > 0)
    {
      write(1,"\nra\n",4);
      return (1);
    }
  }
  else if(stack_a->counter == 2)
  {
    if(swap(stack_a) > 0)
    {
      write(1,"\nra\n",4);
      return (1);
    }
  }
  return(0);
}

int rb(t_int_lst  *stack_b)
{
  if(stack_b->counter >= 3)
  {
    if(rotate(stack_b) > 0)
    {
      write(1,"\nrb\n",4);
      return (1);
    }
  }
  else if(stack_b->counter == 2)
  {
    if(swap(stack_b) > 0)
    {
      write(1,"\nrb\n",4);
      return (1);
    }
  }
  return(0);
}

int rr(t_int_lst  *stack_a, t_int_lst *stack_b)
{
  if(stack_b->counter >= 3 && stack_a ->counter >=3)
  {
    if(rotate(stack_b) > 0 && rotate(stack_a) > 0)
    {
      write(1,"\nrr\n",4);
      return (1);
    }
  }
  else if(stack_b->counter == 2 && stack_a->counter == 2)
  {
    if(swap(stack_b) > 0 && swap(stack_a) > 0)
    {
      write(1,"\nrr\n",4);
      return (1);
    }
  }
  return(0);
}
