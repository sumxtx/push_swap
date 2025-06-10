#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define MAX 1000
#define MIN -1000

void bubble_sort(int arr[], int size);

int *random_gen_unsorted(int arr[])
{
  srand(time(NULL));

  int pos;
  int unique;
  int size = 0;
  int random = 0;
  int top = MAX - MIN + 1;

  while(size < top)
  {
    pos = 0;
    unique = 1;
    random = MIN + rand() % (MAX - MIN + 1);
    while(pos < size)
    {
      if(arr[pos] == random)
        unique = 0;

      if(!unique)
        break;
      else
        pos++;
    }
    if(unique)
    {
      arr[size] = random;
      size++;
    }
  }
  return (arr);
}

int main(void)
{
  int unsorted[MAX - MIN + 1] = {0};
  random_gen_unsorted(unsorted);

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


