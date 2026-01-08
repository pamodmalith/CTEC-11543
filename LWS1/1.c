#include <stdio.h>

void main()
{
  char s1[10], s2[15];

  printf("Enter the string \"Word Processing\" in two parts: ");
  scanf("%s %s", s1, s2);

  printf("%s %s\n", s1, s2);
  printf("%s\n%s\n", s1, s2);
  printf("%.1s.%.1s.\n", s1, s2);
}
