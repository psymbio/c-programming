#include <stdio.h>
int main(int argc, char *argv[]){
  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);
  int arr[size];
  printf("\nEnter the elements of the array\n");
  for(int i=0;i<size;i++){
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  int num;
  printf("\nEnter the element to find in the array: ");
  scanf("%d", &num);

  int loc[size];
  int j = 0;
  int times = 0;
  int flag = 0;
  int k = 0;
  while(k<size){
    if(num == arr[k]){
      loc[j]=k;
      flag = 1;
      times = times+1;
      j++;
    }
    k++;
  }
  if(flag==0){
    printf("\nNumber isn't in the array");
  }

  else
    printf("\n%d found %d times at position:", num, times);
    for(int i=0;i<j;i++){
      if(i!=j-1)
        printf("%d, ", loc[i]);
      else
        printf("%d\n", loc[i]);
    }
  return 0;
}
