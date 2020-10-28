#include <stdio.h>

int maxSum(int arr1[], int n)
{
  int incl = arr1[0];
  int excl = 0;
  int excl_new;
  int i;
  for (i = 1; i < n; i++)
  {
     excl_new = (incl > excl)? incl: excl;

     incl = excl + arr1[i];
     excl = excl_new;
  }
   return ((incl > excl)? incl : excl);

}

int main()
{
   int n, i;
   printf("Enter the size of array");
   scanf("%d",&n);
   printf("Enter elements of the array 1:");
   for(i=0;i<n;i++)
   {
     printf("arr1[%d]: ", i);
     scanf("%d", &arr1[i]);
   }
	printf("\n");
  printf("The maximum sum from the array such that no two elements are adjacent is: %d \n", maxSum(arr1, n));
  return 0;
}
