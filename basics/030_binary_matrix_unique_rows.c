#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter number rows: ");
    scanf("%d", &rows);
    printf("Enter number cols: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("Enter the elements of the binary matrix:");
    for(int i=0; i<rows; i++)
    {
      for(int j=0; j<rows; j++)
      {
        printf("Enter data for row: %d col: %d", i, j);
        scanf("%d", &arr[i][j]);
        if(arr[i][j]!=1 || arr[i][j]!=0)
          {
            printf("Not binary matrix... terminating program");
            return 0;
          }
      }
    }

    for(int i=0; i<rows; i++)
    {
        int flag=0;
        for(int j=0; j<i; j++)
        {
            flag=1;

            for(int k=0; k<=cols; k++)
            if(arr[i][k]!=arr[j][k])
                flag=0;
            if(flag==1)
            break;
        }
        if(flag==0)
        {

            for(int j=0; j<cols; j++)
              printf("%d\n", arr[i][j]);
        }
    }
}
