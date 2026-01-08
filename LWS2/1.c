#include <stdio.h>

int main()
{
  printf("Enter values for a, b, c and d:\n");
  int a, b, c, d;
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  printf("c: ");
  scanf("%d", &c);
  printf("d: ");
  scanf("%d", &d);
  if (c - d == 0)
  {
    printf("Error: Division by zero is not allowed.\n");
    return 1;
  }
  else
  {
    float ratio = (float)(a + b) / (c - d);
    printf("The result of (a + b) / (c - d) is: %f\n", ratio);
  }
  return 0;
}