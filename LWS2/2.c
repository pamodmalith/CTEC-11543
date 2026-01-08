#include <stdio.h>

int main()
{
  int x, y, z;
  printf("Enter three integers to find largest(10 15 20): ");
  scanf("%d %d %d", &x, &y, &z);
  if (x >= z && x >= y)
  {
    printf("Largest value among you entered is: %d\n", x);
  }
  else if (y >= z && y >= x)
  {
    printf("Largest value among you entered is: %d\n", y);
  }
  else
  {
    printf("Largest value is: %d\n", z);
  }
  return 0;
}