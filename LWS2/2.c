#include <stdio.h>

void main()
{
  int x, y, z;
  printf("Enter thre integers to find largest(10 15 20): ");
  scanf("%d %d %d", &x, &y, &z);
  if (x > y)
  {
    if (x > z)
    {
      printf("Largest value among you entered is: %d\n", x);
    }
    else
    {
      printf("Largest value among you entered is: %d\n", z);
    }
  }
  else if (y > z)
  {
    printf("Largest value among you entered is: %d\n", y);
  }
  else
  {
    printf("Largest value among you entered is: %d\n", z);
  }
}