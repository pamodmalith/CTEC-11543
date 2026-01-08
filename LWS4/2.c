#include <stdio.h>

int main()
{
  int n, i;
  int even_count = 0, odd_count = 0;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++)
  {
    printf("%d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      even_count++;
      // printf("%d ", arr[i]);
    }
    else if (arr[i] % 2 != 0)
    {
      odd_count++;
      // printf("%d ", arr[i]);
    }
  }

  printf("Even elements: %d\n", even_count);
  printf("Odd elements: %d\n", odd_count);

  printf("\n");
  return 0;
}