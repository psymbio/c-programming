#include<stdio.h>

int add(int n, int array[], int i)
{
  int sum;
  if (i<n)
  {
  sum = array[i] + add(n, array[], i++);
  }
  else
  return sum;
}
int main()
{
  int n, sum;
  printf("Enter the size of the array");
  scanf("%d", &n);
  int array[n];
  for(register int i=0; i < n; ++i)
  {
    printf("\narray[%d]: ", i);
    scanf("%d", &array[i]);
  }
  printf("\n\n\nThe sum is %d", add(n, array[], 0));
}
