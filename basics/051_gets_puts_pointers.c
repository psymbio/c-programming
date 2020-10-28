#include<stdio.h>
#include<string.h>
//#include<conio.h>
void main()
{
  char str [6];
  //gets(str);
  //puts(str);
  //prints and then stack smashing detected
  //printf("%c", &str[3]);
  //stack smashing detected before printing


  //fgets(str,6,stdin);
  //prints 5 + /0

  //fgets(str,10,stdin);
  //stack smashing detected before itself thus better

  //fputs(str);
  //printf("%s", str);

  //scanf("%s", str);
  //printf("%c", str[3]);

  //getch(str);
  //can't use in linux

  scanf("%c", str);
  printf("%c", str[0]);
  printf("%c", str);
}
