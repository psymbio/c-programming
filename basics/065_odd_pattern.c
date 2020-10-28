#include<stdio.h>
float main()
{
  int height;
  int f = 2*height;
  int m = (2*height)-1;
  printf("height: ");
  scanf("%d", &height);
  for(int i=0; i<height*2; i++)
  {

    for(int j=1; j<f; j++)
    {
      if(j%2==1)
      {
        printf("%d ", j);
      }
      f--;
    }
    printf("\n");
  }
return 0;
}
