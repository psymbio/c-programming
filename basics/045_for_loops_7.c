#include <stdio.h>
void main()
{
  int n;
  printf("Enter the number of rows you want");
  scanf("%d", &n);
  for(int i = 1; i <= n; ++i)
  {
    for (int j = n; j >= i; --j)
    {
      printf(" ");
    }
    for (int m = 1; m <= i; ++m)
    {
      printf("* ");
    }
    printf("\n");
  }
}
