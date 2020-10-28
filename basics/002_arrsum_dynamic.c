#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, i, *ptr, *ptr2, sum = 0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter number of elements in second array: ");
    scanf("%d", &)m;
    ptr2 = (int*) malloc(m * sizeof(int));
    // if memory cannot be allocated
    if(ptr == NULL || ptr2 == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements in first array: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Enter elements in second array: ");
    for(i = 0; i < m; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr2 + i);
    }
    printf("Sum of first and second array= %d", sum);
    // deallocating the memory
    free(ptr);
    free(ptr2);
    return 0;
}
