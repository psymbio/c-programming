#include <stdio.h>
int sumFirst(int a[], int n)
{
    int mp[n][n];
    int suf = 0;
    for (int i = n - 1; i >= 0; i--) {
        suf += a[i];
        mp[suf] = i;
    }
    int pre = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++) {

        pre += a[i];

        if (mp[pre] > i) {

            if (pre > maxi) {
                maxi = pre;
            }
        }
    }
    if (maxi == -1)
        return 0;
    else
        return maxi;
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
    printf("%d",sumFirst(a, size));
    return 0;
}
