#include <stdio.h>

int main()
{
  printf("Enter a number to find sum of its digits: ");
  int num, lastDigit, sum = 0;
  scanf("%d", &num);
  while (num != 0)
  {
    lastDigit = num % 10;
    sum += lastDigit;
    num /= 10;
  }
  printf("%d\n", sum);
  return 0;
}