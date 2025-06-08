#include "push_swap.h"

// For the sake of it, for now, let's supose we have a proper input

int lorem(int *parsed_in)
{
  char splitted[6][3] = {"23", "2", "54", "45", "6", "60"};

  int i;
  int   arglen;

  i = 0;
  arglen = 6;
  parsed_in = (int *)malloc(arglen);
  if(!parsed_in)
    exit(EXIT_FAILURE);
  while(i < arglen)
  {
    parsed_in[i] = ft_atoi(splitted[i]);
    i++;
    //free(splitted[x]);
  }
  //free(splitted);
  return arglen;
}

// --[Checkpoint]--
// at this point we should have
// a sanitized input (with proper natural numbers)
// an array of this numbers converted to integers 
// check if this numbers are not already sorted
// so now we could fill the stack a with the numbers

/*
void a_stack_fill()
{
  int *parsed_in = {0};
  int len = lorem(parsed_in);
  
  while(len)
  {
    create_node(parsed_in[i]);
    pa(stack_a);
  }
  free(parsed_in);
}
*/
