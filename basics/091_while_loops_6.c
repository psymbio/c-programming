#include<stdio.h>
int main(int argc, char *argv[])
{
  // to check f didgit is armstrong or not
  // messed up program
  // start again from scratch
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int digit, answer = 0, f=1;
  int power = 1;
  int m = n;
  int l=1, c=1;
  int len = 0;
  for (int i=n; i>0; ++len,i/=10);
  while(m!=0)
  {
    digit = m % 10;
    if(l<=(len-1))
    printf("%d^3 + ", digit);
    else
    {
      printf("%d^3 = ", digit);
      c++;
    }
    m/=10;
    if(c==2)
    {
      l = 1;
      m = n;
      f = 1;
      power = 1;
      while (f <= 3)
      {
        for (int x = 1; x <= 3; power *= digit, ++x);
          if(l<(len-1))
            printf("%d + ", power);
          else
            {
              printf("%d = ", power);
              c++;
            }
          ++f;
      }
      l++;
    }
    if(c==3)
    {

    }
    l++;
  }
}
