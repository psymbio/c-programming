#include <stdio.h>
void main()
{
  int m, n;
  printf("Enter upper and lower limit: ");
  scanf("%d %d", &m, &n);
  for(int i = m; i <= n; ++i)
  {

      if (i%100!=11 && i%10==1)
        printf("%dst vanilla_skies\n", i);
      else if (i%100!=12 && i%10==2)
        printf("%dnd vanilla_skies\n", i);
      else if (i%100!=13 && i%10==3)
        printf("%drd vanilla_skies\n", i);
      else
        printf("%dth vanilla_skies\n", i);
  }
}
