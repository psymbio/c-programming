#include<stdio.h>
void main()
{
  int n, i;
  printf("Enter the size of array");
  scanf("%d",&n);
  int arr[n], arr2[n], arr3[n];
  printf("Enter elements of the array 1:");
  for(i=0;i<n;i++)
  {
    printf("arr1[%d]: ", i);
    scanf("%d", &arr1[i]);
  }
  int j=0, k=0;
  for(i=0;i<n;i++)
  {
    if (arr1[i]%2 == 0)
    {
      arr2[j] = arr1[i];
      j++;
    }
    else
    {
      arr3[k] = arr1[i];
      k++;
    }
  }
  printf("the even elements are:\n");
  for(i=0;i<j;i++)
  {
    printf("%d",arr2[i]);
  }
  printf("The odd elements are:\n");
  for(i=0;i<k;i++)
  {
    printf("%d", arr3[i]);
  }
}
