#include <stdio.h>
int findElement(int arr[], int n)
{
    int prefixMul[n];
    prefixMul[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixMul[i] = prefixMul[i - 1] * arr[i];
    int suffixMul[n];
    suffixMul[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffixMul[i] = suffixMul[i + 1] * arr[i];
    for (int i = 1; i < n - 1; i++)
        if (prefixMul[i] == suffixMul[i])
            return arr[i];
    return 0;
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
    printf("%d", findElement(a, size));
    return 0;
}
