#include <stdio.h>
int main(int argc, char *argv[]){
  int size;
  printf("Enter size of array");
  scanf("%d", &size);
  int arr[size];
  printf("\nEnter the elements of the array\n");
  for(int i=0;i<size;i++){
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  int num;
  printf("Enter the element to find in the array: ");
  scanf("%d", &num);

  int loc = -1;
  int k = 0;
  while(loc==-1 && k<size){
    if(num == arr[k])
      loc=k;
    k++;
  }
  if(loc==-1){
    printf("\nNumber isn't in the array");
  }

  else
    printf("\n%d found at position: %d", num, loc);
  return 0;
}
