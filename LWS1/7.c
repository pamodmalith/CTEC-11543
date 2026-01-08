#include <stdio.h>
int inputValue, hundreds, tens, units;

int main()
{
  printf("Enter an integer: ");
  scanf("%d", &inputValue);

  hundreds = inputValue / 100;
  tens = (inputValue / 10) % 10;
  units = inputValue % 10;

  printf("Hundreds: %d\n", hundreds);
  printf("Tens: %d\n", tens);
  printf("Units: %d\n", units);

  return 0;
}