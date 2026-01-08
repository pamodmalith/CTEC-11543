#include <stdio.h>

int main()
{
  int x, y = 0;

  printf("Enter a number");
  scanf("%d", &x);

  if (x == 0)
  {
    y = 0;
  }
  else if (x > 0)
  {
    y = 1;
  }
  else
  {
    y = -1;
  }

  printf("The value of y is: %d\n", y);

  return 0;
}