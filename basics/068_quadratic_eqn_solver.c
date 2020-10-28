#include <stdio.h>
#include <math.h>

int main(int argv, char *argc){

  int a, b, c, d;
  float x1, x2, x;
  printf("enter the value of a, b, c");
  scanf("%d%d%d", &a, &b, &c);
  d = pow(b,2)-4*a*c;

  if(d>0){
    x1 = ((-1)*b + sqrt(d)) / 2*a;
    x2 = ((-1)*b - sqrt(d)) / 2*a;
    printf("\nRoots are: x1=%.2f x2=%.2f", x1, x2);
  }

  else if(d==0){
    x= (-1)*b / 2*a;
    printf("\nRoot is: x=%.2f", x1);
  }

  else
  printf("\nNo real solution");

  return 0;

}
