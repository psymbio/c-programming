#include <stdio.h>
#include <string.h>
#include <ctype.h>
char findCapitalLetter(char string[]){
  static int i = 0;
  if (i < strlen(string))
  {
      if (isupper(string[i]))
      {
          return string[i];
      }
      else
      {
          i = i + 1;
          return findCapitalLetter(string);
      }
  }
  else return 0;
}

int main()
{
    char string[20], capitalLetter;

    printf("Find first capital letter in string\n");
    printf("Enter string: ");
    scanf("%s", string);
    capitalLetter = findCapitalLetter(str1);
    if (capitalLetter == 0)
    {
        printf(" There is no capital letter in the string :  %s\n", str1);
    }
    else
    {
        printf(" The first capital letter appears in the string %s is %c\n\n", str1, capitalLetter);    }
        return 0;
    }

}
