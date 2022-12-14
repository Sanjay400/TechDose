#include <stdio.h>

int main()
{
  int arr[100], n, c, d;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &arr[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        int swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", arr[c]);

  return 0;
}
