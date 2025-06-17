#include "push_swap.h"

int *convert_int(char **splitted, int len)
{
  int i = 0;
  int *int_arr;

  int_arr = (int*)malloc(len * sizeof(int));
  if(!int_arr)
    _ftfreewexit_(splitted, len, 1);
  while(i < len)
  {
    int_arr[i] = ft_atoi(splitted[i]);
    i++;
  }
  if(!(check_input(splitted,int_arr,len)))
  {
    free(int_arr);
    _ft_free(splitted, len);
  }
  return int_arr;
}

int check_input(char **splitted, int *int_arr, int len)
{
  int i;

  i = 0;
  while(i < len)
  {
    if(int_arr[i] == 0)
    {
      if(!(check_zero(splitted[i])))
        return 0;
    }
    i++;
  }
  if(check_dups(int_arr, len))
    return 0;
  if(check_sorted(int_arr, len))
    return 0;
  return 1;
}

int	check_zero(char *av)
{
  int	i;

  i = 0;
  if ((av[i] == '-' || av[i] == '+') && av[i + 1] != '\0')
    i++;
  while (av[i] == '0' && av[i] != '\0')
    i++;
  if (av[i] != '\0')
    return (0);
  return (1);
}

int check_dups(int *int_arr, int len)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while(i < len -1)
  {
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

int check_sorted(int *int_arr, int len)
{
  int i;
  int j;
  while(i < len -1)
  {
    while(j < len)
    {
      if(int_arr[j] < int_arr[i])
        return 0;
      i++;
    }
    j++;
  }
  return 1;
}

