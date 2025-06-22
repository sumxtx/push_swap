#include "push_swap.h"

void stack_display(t_int_lst *stack, char *st)
{
  if(!stack)
    return ;
  int amount;
  t_int_lst_node *iter;

  amount = stack->counter;
  iter = stack->first;
  while(iter && amount)
  {
    ft_printf("%s: %d\n", st, iter->content);
    iter = iter->next;
    amount--;
  }
}

void stack_display_columns(t_int_lst *stack_a, t_int_lst *stack_b)
{
  int sac;
  int sbc;
  int leader;

  t_int_lst_node *iter_a;
  t_int_lst_node *iter_b;

  sac = stack_a->counter;
  sbc = stack_b->counter;

  iter_a = stack_a->first;
  iter_b = stack_b->first;

  if(sac > sbc)
  {
    leader  = sac - sbc;
    while(leader)
    {
      ft_printf("| %d |\n", iter_a->content);
      iter_a = iter_a->next;
      leader--;
    }
  }
  else if (sac < sbc)
  {
    leader  = sbc - sac;
    while(leader)
    {
      ft_printf("          | %d |\n", iter_b->content);
      iter_b = iter_b->next;
      leader--;
    }
  }
  else // both are equal
  {
    leader = sac;
  }

  while(iter_a && iter_b)
  {
    ft_printf("| %d |    | %d |\n",iter_a->content, iter_b->content);
    iter_a = iter_a->next;
    iter_b = iter_b->next;
  }
}

void print_stacks(t_int_lst *stack_a, t_int_lst *stack_b)
{
  stack_display(stack_a, "stack A");
  stack_display(stack_b, "stack B");
}
