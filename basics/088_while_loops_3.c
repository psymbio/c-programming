#include <stdio.h>
int main(int argc, char *argv[])
{
    // to print the answer of 1/1! + 1/2! + 1/3! + ... + 1/n!
    int n;
    printf("Enter a value for n to find (1/1! + 1/2! + 1/3! + ... + 1/n!)'s value: ");
    scanf("%d", &n);
    int i = 2;
    int f = n-1;
    printf("\n\n1 + ");
    while(i <= f)
    {
      printf("1/%d! + ", i);
      ++i;
    }
    printf("1/%d! = ", n);
    i = 1;
    int j = 1;
    float factorial = 1, sum = 0;
    while(i <= n)
    {
      j = 1;
      while(j <= i)
      {
        factorial *= j;
        ++j;
      }
      sum += 1/factorial;
      ++i;
    }
    printf("%f", sum);
    return 0;
}
