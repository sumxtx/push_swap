
#include "tests.h"



void test_sort_bubble(void)
{
  int *unsorted = NULL;
  int min = 300;
  int max = 500;
  unsorted = random_gen_unsorted(min, max);

  int pos = 0;
  int top = MAX - MIN + 1;

  bubble_sort(unsorted, top);
  printf("\n\n\n --[Sorted]-- \n\n\n");

  pos = 0;
  while(pos < top)
  {
    printf("%d ", unsorted[pos]);
    pos++;
  }
}
 int main(void)
{
  test_sort_bubble();
}
