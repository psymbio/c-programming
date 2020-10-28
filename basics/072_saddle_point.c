#include<stdio.h>
void main()
{
  int rows, cols;
  printf("Enter number rows: ");
  scanf("%d", &rows);
  printf("Enter number cols: ");
  scanf("%d", &cols);
  int arr[rows][cols];
  printf("Enter the elements of the matrix:");
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<rows; j++)
    {
      printf("Enter data for row: %d col: %d", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  for (i = 1; i <= n; i++)
{
    min = mat[i][1];
    for (j = 1; j < =n; j++)
    {
        if (min >= mat[i][j])
        {
            min = mat[i][j];
            mat1[1][1] = i;
            mat1[1][2] = j;
        }
    }
    j = mat1 [1][2];
    max = mat[1][j];
    for (k = 1; k <=n; k++)
    {
        if (max <= mat[k][j])
        {
            max = mat[i][j];
            mat1 [2][1] = k;
            mat1 [2][2] = j;
        }
    }
    if (min == max)
    {
        if (mat1 [1][1] == mat1 [2][1] && mat1 [1][2] == mat1 [2][2])
        {
            printf(“Saddle point (%d, %d) : %d”, mat1 [1][1], mat1 [1][2], max);
        }
    }
}
}
