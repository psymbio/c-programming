#include <stdio.h>
int main(){
  int size, *ptr, i = 0;
  printf("Enter the size of sting to be entered");
  scanf("%d", &size);
  ptr = (char*) malloc(size * sizeof(char));
  if(ptr == NULL)
  {
      printf("Error! memory not allocated.");
      return 0;
  }
  printf("Enter the string");
  for (i = 0; i < size; ++i) {
      scanf("%c", ptr+i);
  }
  printf("\nString entered");
  for (i = 0; i < size; ++i) {
      printf("%c", *(ptr+i));
  }
}
