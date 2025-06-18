#include <stdio.h>

int check_dups(int *int_arr, int len)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while(i < len)
  {
    j = i + 1;
    while(j < len)
    {
      if(int_arr[i] == int_arr[j])
        return 1;
      j++;
    }
    i++;
  }
  return 0;
}

void check_dups_test()
{
  int arr[8] = {3,24,1324,6,5,1324,1351,2};
  printf("%d", check_dups(arr, 8));
}

int main(void)
{
  check_dups_test();
  return (0);
}
