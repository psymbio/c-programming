#include<stdio.h>
int findSplitPoint(int arr[], int n)
{
    int leftSum = 0 ;
    for (int i = 0; i < n; i++)
    {
        leftSum += arr[i] ;
        int rightSum = 0 ;
        for (int j = i+1 ; j < n ; j++ )
            rightSum += arr[j] ;
        if (leftSum == rightSum)
            return i+1 ;
    }
    return 0;
}
void printTwoParts(int arr[], int n)
{
    int splitPoint = findSplitPoint(arr, n);
    if (splitPoint == -1 || splitPoint == n )
    {
      printf("Not possible");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if(splitPoint == i)
            printf("\n");
        printf("%d ", arr[i]);
    }
}
int main()
{
  int size;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  int a[size];
  for(int i=0; i<size; i++){
    printf("Enter %d element:", i);
    scanf("%d", &a[i]);
  }
    printTwoParts(a, size);
    return 0;
}
