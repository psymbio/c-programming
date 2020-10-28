#include <stdio.h>
#include <string.h>

// index(text, pattern)
// finds text in the pattern and gives its loaction in the string

int main(int argc, char *argv){
  int size;
  printf("Enter the size of a string: ");
  scanf("%d", &size);
  char string[size];
  printf("Enter a string: ");
  scanf("%s", string);
  char pattern[size];
  printf("Enter the pattern to find text in: ");
  scanf("%s", pattern);
  char text;
  printf("Enter the text to find: ");
  scanf("%c", &text);

}

int index(char text, char *pattern){
  int m, n;
  int index, flag;
  for(m=0; m<strlen(pattern); m++){
    index=m;
    flag=1;
    for(n=0;n<strlen(text);n++){
      if ()
    }
  }
}
