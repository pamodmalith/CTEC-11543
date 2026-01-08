#include <stdio.h>

int main()
{
  // first
  for (int i = 1; i <= 5; i++)
  {
    for (int x = 1; x <= i; x++)
    {
      printf("%d", x);
    }
    printf("\n");
  }
  printf("\n");

  // second
  for (int i = 1; i <= 5; i++)
  {
    for (int x = 1; x <= i; x++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
  printf("\n");

  // third
  for (int i = 1; i <= 5; i++)
  {
    for (int x = 1; x <= i; x++)
    {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");

  // fourth
  for (int i = 5; i >= 1; i--)
  {
    for (int x = 1; x <= i; x++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}