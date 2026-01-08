#include <stdio.h>

void main()
{
  int x;
  long long factorial, i;
  printf("Enter an integer: ");
  scanf("%d", &x);

  factorial = 1;
  for (i = 1; i <= x; i++)
  {
    factorial = factorial * i;
    printf("Factorial of %lld is %lld\n", i, factorial);
  }
}