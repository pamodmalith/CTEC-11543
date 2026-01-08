#include <stdio.h>

int main()
{
  printf("Enter a number to find its reverse: ");
  int num, reversedNum;
  scanf("%d", &num);
  reversedNum = 0;
  while (num != 0)
  {
    reversedNum = reversedNum * 10 + (num % 10);
    num /= 10;
  }
  printf("%d", reversedNum);
  return 0;
}