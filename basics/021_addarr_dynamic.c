#include <stdio.h>
#define NULL 0
int main()
{
   int rows, cols, i=0, j=0;
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &rows, &cols);
   int **a;
   a=(int **) malloc(rows*sizeof(int *));
   int **b;
   b=(int **) malloc(rows*sizeof(int *));
   int **c;
   c=(int **) malloc(rows*sizeof(int *));

   for(i=0;i<rows;i++){
    a[i]=(int *) malloc(cols*sizeof(int));
    b[i]=(int *) malloc(cols*sizeof(int));
    c[i]=(int *) malloc(cols*sizeof(int));
  }
    if(a == NULL || b == NULL || c == NULL)
    {
      return 0;
    }
   printf("Enter the elements of first matrix\n");
   for (i = 0; i < rows; i++)
   {
     for(j = 0; j < cols; j++)
     {
       printf("Enter data for row: %d col: %d", i, j);
       scanf("%d", (*(a+i)+j));
     }
   }

   printf("Enter the elements of second matrix\n");
   for (i = 0; i < rows; i++)
   {
     for(j = 0; j < cols; j++)
     {
       printf("Enter data for row: %d col: %d", i, j);
       scanf("%d", (*(b+i)+j));
     }
   }
   printf("Sum of entered matrices:-\n");

   for (i = 0; i < rows; i++) {
      for (j = 0 ; j < cols; j++) {
         *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j) ;
         printf("%d\t", *(*(c+i)+j));
      }
      printf("\n");
   }

   return 0;
}
