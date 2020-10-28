#include <stdio.h>
void main()
{
  char asterisk = '*';
  int n;
  printf("Enter an integer to represent the number of rows and columns: ");
  scanf("%d", &n);
  for(int i=1; i<=n; ++i)
  {
    if(i%2==0)
      printf(" ");
    for(int j=1; j<=n; ++j)
    {
      printf(" %c", asterisk);
    }
    //if(i%2!=0)
      //printf(" ");
    printf("\n");
  }
}
