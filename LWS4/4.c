#include <stdio.h>
#define SIZE 5

int main()
{
  int large, second;
  int arr[SIZE] = {12, 22, 31, 66, 91};

  // inialize
  large = arr[0];
  second = arr[0];

  for (int i = 0; i < SIZE; i++)
  {
    if (arr[i] > large)
    {
      second = large;
      large = arr[i];
    }
    else if (arr[i] > second && arr[i] != large)
    {
      second = arr[i];
    }
  }
  printf("%d\n", large);
  printf("%d\n", second);
  return 0;
}