#include "tests.h"

int main(void)
{
  int *arr;
  int max;
  int min;
  int arr_len;

  max = 50;
  min = -50;
  int top = max - min + 1;

  arr = random_gen_unsorted(min, max);
  int pos = 0;
  while(pos < top)
  {
    printf("%d ", arr[pos]);
    pos++;
  }
  selectionSort(arr, top);
  printf("\n\n\n --[Sorted]-- \n\n\n");

  pos = 0;
  while(pos < top)
  {
    printf("%d ", arr[pos]);
    pos++;
  }
}
