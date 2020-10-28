#include <stdio.h>
#include <math.h>
int main(int argc, char *argv)
{
  char answer = 'y';
  do
  {
    int n;
    printf("Enter a number to check whether Armstrong number or not");
    scanf("%d", &n);
    printf("\nDo you want to continue? (y/n): ");

    scanf("%c", &answer);
  } while(answer == 'y' || answer =='Y');
}
