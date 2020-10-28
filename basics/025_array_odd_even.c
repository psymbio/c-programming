#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    char arr[30];
    scanf("%d", &n);
   for(int i = 0; i < n; i++)
   {
       scanf("%s", arr);
       int length= 0;
       for(length = &arr[0]; length!='\0'; length++);
       printf("%d", length);
   }
   return 0;

 }
