#include <stdio.h>
int main(int argc, char *argv[])
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int digit, product = 1;
  int len = 0;
  for (int i=n; i>0; ++len,i/=10);
  printf("\n")
  int f = 0;
  int c = 1;
  while(n!=0)
  {

    digit = n % 10;
    if(f<(len-1))
      printf("%d*", digit);
    else
      {
        printf("%d = ", digit);
        c++;
      }
    product *= digit;
    if(c==2)
      printf("%d", product);
    n /= 10;
    f++;
  }

}
