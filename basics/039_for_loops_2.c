#include<stdio.h>
#include<math.h>
void main()
{
  int m, n;
  printf("Enter upper and lower limit: ");
  scanf("%d %d", &m, &n);
  int count = 0;
  for (int i = m; m<=n; ++i)
  {
    if (i==2)
      ++count;
    else if (i%2==0);
    else
    {
        for (int j = 3; j <= pow(i,1/2); 2+j)
        {
          if (j%i!=0)
            ++count;
        }
    }
    if(count>1)
      printf("%d", i);
  }

}
