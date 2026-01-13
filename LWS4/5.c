#include <stdio.h>

int main()
{
  char word[] = "CProgramming";
  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%c", word[j]);
    }
    printf("\n");
  }
  return 0;
}