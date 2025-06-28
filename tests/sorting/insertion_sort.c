#include "tests.h"

void insertion_sort(int arr[], int size)
{
  int key;
  int j;

  for(int i = 1; i < size; i++)
  {
    key = arr[i];
    j = i -1;
    while(j >= 0 && arr[j] > key)
    {
      arr[j+1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void insertion_sort_2(int arr[], int size)
{
  int active;

  for(int i = 1; i < size; i++)
  {
    active = arr[i];
    for(int j = i - 1; j >= 0; j--)
    {
      if(arr[j] > active)
      {
        arr[j + 1] = input[j];
      }
      else
      {
        break;
      }
    }
    arr[j + 1] = active;
  }
}
