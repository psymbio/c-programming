#include <stdio.h>
int main()
{
    int size, *ptr, largest, i=0;
    printf("Enter the size of array:");
    scanf("%d", &size);
    ptr = (int*) malloc(size * sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        return 0;
    }
    for (i = 0; i < size; ++i) {
        printf("Enter number %d: ", i);
        scanf("%d", ptr+i);
    }
    largest = *ptr;
    for (i = 0; i < size; ++i) {
      if(*(ptr+i)>largest)
        largest = *(ptr+i);
    }
    printf("\nLargest element = %d", largest);
    return 0;
}
