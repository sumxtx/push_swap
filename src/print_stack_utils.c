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
  int digits_a;
  int digits_b;
  int digitslen;
  t_int_lst_node *iter_a;
  t_int_lst_node *iter_b;

  sac = stack_a->counter;
  sbc = stack_b->counter;
  iter_a = stack_a->first;
  iter_b = stack_b->first;

  digits_a = get_max_digits(stack_a);
  digits_b = get_max_digits(stack_b);

  if(digits_a == 0)
  {
    if(digits_b > 0)
      digitslen = digits_b;
  }
  else if(digits_b == 0)
  {
    if(digits_a > 0)
      digitslen = digits_a;
  }
  else
  {
    if(digits_a > digits_b)
      digitslen = digits_a;
    else
      digitslen = digits_b;
  }
  digitslen = 10;

  if(sac > sbc)
  {
    leader  = sac - sbc;
    while(leader)
    {
      printf("|%*d|\n", digitslen, iter_a->content);
      iter_a = iter_a->next;
      leader--;
    }
  }
  else if (sac < sbc)
  {
    leader  = sbc - sac;
    while(leader)
    {
      printf(" %*c \t|%*d|\n",digitslen, ' ', digitslen,iter_b->content);
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
    printf("|%*d|\t|%*d|\n",digitslen,iter_a->content,digitslen,iter_b->content);
    iter_a = iter_a->next;
    iter_b = iter_b->next;
  }
  printf("+----------+\t+----------+\n");
  printf("| STACK  A |\t| STACK  B |\n");
  printf("+----------+\t+----------+\n");
}

void print_stacks(t_int_lst *stack_a, t_int_lst *stack_b)
{
  stack_display(stack_a, "stack A");
  stack_display(stack_b, "stack B");
}
