#include <stdio.h>
void main()
{
  char hash = '#';
  int m, n;
  printf("Enter columns and rows: ");
  scanf("%d %d", &m, &n);
  for(int i=1; i<=n; ++i)
  {
    for(int j=1; j<=m; ++j)
    {
      printf("%c", hash);
    }
    printf("\n");
  }
}
