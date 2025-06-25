#include "push_swap.h"

int rev_rotate(t_int_lst *src)
{
  t_int_lst_node *holder;

  holder = src->first;
  while(holder->next != src->last)
  {
    holder = holder->next;
  }
  src->last->next = src->first;
  src->first = src->last;
  src->last = holder;
  src->last->next = NULL;
  
  return (1);
}

int rra(t_int_lst  *stack_a)
{
  if(stack_a->counter >= 3)
  {
    if(rev_rotate(stack_a) > 0)
    {
      write(1,"rra\n",4);
      return (1);
    }
  }
  else if(stack_a->counter == 2)
  {
    if(swap(stack_a) > 0)
    {
      write(1,"rra\n",4);
      return (1);
    }
  }
  return(0);
}

int rrb(t_int_lst  *stack_b)
{
  if(stack_b->counter >= 3)
  {
    if(rev_rotate(stack_b) > 0)
    {
      write(1,"rrb\n",4);
      return (1);
    }
  }
  else if(stack_b->counter == 2)
  {
    if(swap(stack_b) > 0)
    {
      write(1,"rrb\n",4);
      return (1);
    }
  }
  return(0);
}

int rrr(t_int_lst  *stack_a, t_int_lst *stack_b)
{
  if(stack_b->counter >= 3 && stack_a ->counter >=3)
  {
    if(rev_rotate(stack_b) > 0 && rev_rotate(stack_a) > 0)
    {
      write(1,"rrr\n",4);
      return (1);
    }
  }
  else if(stack_b->counter == 2 && stack_a->counter == 2)
  {
    if(swap(stack_b) > 0 && swap(stack_a) > 0)
    {
      write(1,"rrr\n",4);
      return (1);
    }
  }
  return(0);
}
