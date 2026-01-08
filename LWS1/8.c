#include <stdio.h>

void main()
{
  int p, t;
  float r;
  printf("Enter the principal amount: ");
  scanf("%d", &p);
  printf("Enter the time in years: ");
  scanf("%d", &t);
  printf("Enter the rate of interest: ");
  scanf("%f", &r);
  float si = (p * t * r) / 100;
  printf("The Simple Interest is: %.2f\n", si);
}