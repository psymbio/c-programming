#include <stdio.h>
static int a = 0, b = 19;
int d;
float f;
char y;
char z = 90;
#define c 90
const int h;
int function()
{
  int a = 1;
  static int b = 10;
  printf("%d\n%d\n\n", a, b);
  a++;
  b++;
  return 340;
}

int add()
{
  static int b;
  int a;
  float f;
  b++;
  printf("\n\n\n%d\n%d\n%f", b, a, f);
  a++; //doubt
  printf("\n\n%d\n%c", a, c);

}

float main()
{
  int h =90; // try  with and without this
  function();
  function();
  function();
  function();
  a++;
  b++;
  //c++;
  printf("\n\n\n%d\n%d\n%d", a, b, c);
  printf("\n\n\n%d\n%f\n%c\n%c\n%d", d, f, y, z, h);
  add();
  return 'a';

}
