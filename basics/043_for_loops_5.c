#include <stdio.h>
void main()
{
  int m, n;
  float fac = 1;
  int j = 1;
  printf("Enter lower and upper limit to print factorials of all even numbers in that range: ");
  scanf("%d %d", &m, &n);
  for(int i = m; i <= n; ++i)
  {
    if(i%2==0)
    { j=1;
      fac = 1;
      while(j<=i)
      {
        fac *= j;
        ++j;
      }
      printf("%d! = %.0f\n", i, fac);
    }
  }
}
