#include <stdio.h>

void main()
{
  printf("Enter x and y values: ");
  int x, y;
  scanf("%d %d", &x, &y);

  printf("(x+y)/(x-y) = %.2f; (x+y)/2 = %.2f; (x+y)(x-y) = %.2f\n", (float)((x + y) / (x - y)), (float)((x + y) / 2), (float)((x + y) * (x - y)));
}
