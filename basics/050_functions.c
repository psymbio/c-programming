#include<stdio.h>
void add(int a, int b, int c, int d)
{
  int e = a + b + c + d;
  printf("%d", e);
}

void main()
{ int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  add(a,b,c);
}
