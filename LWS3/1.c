#include <stdio.h>

int main()
{
  printf("Enter a number to find its square: ");
  int num;
  scanf("%d", &num);
  int square = num * num;
  printf("The square of %d is %d\n", num, square);
  return 0;
}
