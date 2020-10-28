#include <stdio.h>
int KpartitionsPossible(int arr[], int n, int K)
{
    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefix_sum[i] =  prefix_sum[i - 1] + arr[i];
    int total_sum = prefix_sum[n-1];
    if (total_sum % K != 0)
        return 0;
    int temp = 0;
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (prefix_sum[i] - (pos == -1 ? 0 :
            prefix_sum[pos]) == total_sum / K)
        {
            pos = i;
            temp++;
        }

        else if (prefix_sum[i] - prefix_sum[pos] >
                total_sum / K)
            break;
    }

    return (temp == K);
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
  int K = 3;
    if (KpartitionsPossible(arr, n, K))
      printf("yes");
    else
        printf("no");
    return 0;
}
