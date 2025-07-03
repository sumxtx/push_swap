#include "tests.h"

int main(void)
{
  int arr[11]={0,8,1,3,2,7,4,5,6,9,10};
  int max = 10;
  int min = 0;
  int arr_len;

  int top = max - min + 1;

  int pos = 0;
  while(pos < top)
  {
    printf("%d ", arr[pos]);
    pos++;
  }
  merge_sort(arr, 0, top -1);
  printf("\n\n\n --[Sorted]-- \n\n\n");

  pos = 0;
  while(pos < top)
  {
    printf("%d ", arr[pos]);
    pos++;
  }
}
