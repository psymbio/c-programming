#include <stdio.h>
int main(int argc, char *argv){
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter the values in the array");
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  int j = 0;
  int max = arr[0];
  int loc = 0;

  while(j<n){
    if(max < arr[j]){
      loc = j;
      max = arr[j];
    }
    j++;
  }

  printf("\nmaxval=%d loc=%d", max, loc);

  return 0;
}
