
#include<stdio.h>
int a = 10;

#define g 10
void main()
{
  int a = 1;
  int b = ++a + a+ a++;
  //int g = 20;
  printf("%d %d %d", a, b, g);


  int h =printf("hey\0marzia");
  printf("%d", h);
}
