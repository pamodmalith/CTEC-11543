#include <stdio.h>
#include <math.h>

int main()
{
  int input;
  int positive = 0, negative = 0;
  while (1)
  {
    printf("Enter a number: ");
    scanf("%d", &input);
    if (input == 9999)
    {
      break;
    }
    else if (input >= 0)
    {
      printf("The square root of %d is %.2f\n", input, sqrt(input));
      positive++;
    }
    else
    {
      negative++;
      continue;
    }
  }
  printf("Total numbers entered: %d\n", positive);
  printf("Total negative numbers entered: %d\n", negative);
  return 0;
}