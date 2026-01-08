#include <stdio.h>

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index, input;

  printf("Enter position to change element in [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]: ");
  scanf("%d", &index);

  printf("What you want to input: ");
  scanf("%d", &input);

  arr[index - 1] = input;

  printf("New elements: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}