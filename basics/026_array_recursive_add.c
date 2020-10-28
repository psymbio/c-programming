#include <stdio.h>
int sum(int arr[], int n)
{
  if(n<=0)
  return 0;
  return (sum(arr, n-1) + arr[n-1]);
}

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<n; i++)
  {
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  printf("\nThe sum is : %d", sum(arr, n));
  return 0;
}
