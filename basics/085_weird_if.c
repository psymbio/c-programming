

#include <stdio.h>

/* global variable declaration */
int g = 20;
  //printf ("value of g = %d\n",  g);
int main () {

  /* local variable declaration */
  int g = 10;

  printf ("value of g = %d\n",  g);

int i = 1;
for(printf("hello"); i<10; printf("hhu"))
{
  i++;
  printf("in loop");
}

printf("\n\n\n\n%-8d", g);
  return 0;
}
