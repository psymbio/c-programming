#include <stdio.h>
int i=-1v, j;
void swap(int i, int j, int arr[]){
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
void midReverse(int i,int j,int size,int arr[]){
  if(i<n){
    swap(i++, n, arr[]);
    swap(j++, f, arr[]);
    midReverse(i++, j++, size, arr[]);
  }
  else
    for(int k = 0; k < size; k++){
      printf("%d\t", arr[k]);
    }
}
