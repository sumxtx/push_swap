#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int arr[], int size)
{
  int i = 0;
  int j = 0;
  while(i < size -1)
  {
    while(j < (size - i - 1))
    {
      if(arr[j] > arr[j+1])
        swap(&arr[j], &arr[j+1]);
      j++;
    }
    j = 0;
    i++;
  }
}
