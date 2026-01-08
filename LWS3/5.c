#include <stdio.h>

int main()
{
  int age;
  int count = 0;
  for (int i = 1; i <= 10; i++)
  {
    printf("Enter %d person age: ", i);
    scanf("%d", &age);
    if (age < 50 || age > 60)
    {
      continue;
    }
    count++;
  }
  printf("Number of people aged between 50 and 60: %d\n", count);
  return 0;
}