#include "tests.h"

int calculate_len(int min, int max)
{
  int len;
  if(max < min)
  {
    printf("Max Cannot be Less than Min");
    exit(EXIT_FAILURE);
  }
  else
  {
    len = max - min + 1;
  }
  return(len);
}

int array_size(int arr[])
{
  int size = 0;
  
  return (malloc_usable_size(arr) / sizeof(int) - 1);
}

int *random_gen_unsorted(int min, int max)
{
  int *arr;
  int arr_len;
  int pos;
  int unique;
  int size = 0;
  int random = 0;
  srand(time(NULL));

  arr_len = calculate_len(min, max);
  arr = (int *)malloc(arr_len * sizeof(int));
  if(!arr)
    exit(EXIT_FAILURE);

  while(size < arr_len)
  {
    pos = 0;
    unique = 1;
    random = min + rand() % (arr_len);
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
