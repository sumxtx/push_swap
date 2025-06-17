#include "push_swap.h"

// For the sake of it, for now, let's supose we have a proper input

void sort_stack(int *int_arr, int ac)
{
  stack_a_fill();
}


int_lst *stack_a_fill()
{
  char splitted[6][3] = {"23", "2", "54", "45", "6", "60"};

  int   arglen;
  int_lst *holder = NULL;
  int_lst *stack_a = NULL;

  arglen = 6;
  while(arglen)
  {
    arglen--;
    holder = int_lst_node(ft_atoi(splitted[arglen]));
    if(!holder)
      exit(EXIT_FAILURE); // TODO: Try make a wrapper, So all this if(!)exit routine doesnt condume two lines
                          //free(splitted[x]);
    int_lst_addfront(&stack_a, holder);
  }
  //free(splitted);
  return stack_a;
}

// --[Checkpoint]--
// at this point we should have
// a sanitized input (with proper natural numbers)
// an array of this numbers converted to integers 
// check if this numbers are not already sorted
// so now we could fill the stack a with the numbers

int lorem()
{
  stack_a_fill();
}
