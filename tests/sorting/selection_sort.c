#include "tests.h" 

void selection_sort(int arr[], int size)
{
  for(int i = 0; i < size -1; i++)
  {
    int imin = i;

    for(int j = i + 1; j < size; j++)
    {
      if(arr[j] < arr[imin])
      {
        imin = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[imin];
    arr[imin] = temp;
  }
}
