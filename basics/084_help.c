#include <stdio.h>
#include <string.h>
void main(){
  char Str1[]=" Sweat";
  char Str2[]=" Sweet";
  //error: str1 instead of Str1 & str2 instead of Str2
  printf("strcmp: %d",strcmp(Str1, Str2));
  printf("\nstrlen str1: %d",strlen(Str1));
  strcpy(Str1, Str2);
  printf("\n%s\n%s", Str1, Str2);
  //printf("strlen str1: %d",strlen(Str1));
  //strcpy(Str1, Str2);


}

/*
b)
i)
(idhar thode words change karliyo)
The NULL-termination is what differentiates a char array from a string (a NULL-terminated char-array) in C. Most string-manipulating functions relies on NULL to know when the string is finished (and its job is done), and won't work with simple char-array (eg. they'll keep on working past the boundaries of the array, and continue until it finds a NULL somewhere in memory).
In C, 0 (the integer value) is considered boolean FALSE - all other values are considered TRUE. if, for and while uses 0 (FALSE) or non-zero (TRUE) to determent how to branch or if to loop. char is an integer type, an the NULL-character (\0) is actually and simply a char with the decimal integer value 0 - ie. FALSE. This make it very simple to make functions for things like manipulating or copying strings, as they can safely loop as long as the character it's working on is non-zero (ie. TRUE) and stop when it encounters the NULL-character (ie. FALSE) - as this signifies the end of the string. It makes very simple loops, since we don't have to compare, we just need to know if it's 0 (FALSE) or not (TRUE).
(isko aise hi likh diyo)
Basically null termination signifies the end of a character array string and assign variable length strings a fixed length.
Usually after initialization if nothing is assigned to the string array then garbage values are stored. So the actual length of the string happens to be whenever the counter encounters the null termination.

ii)
a) Return value is less than 0, signifying Str1 is less than Str2
b) Str1: Sweat Sweet Str2: Sweet
c) 6
d) Str1: Sweet Str2: Sweet
*/


// flowcharts banane me ab alaaas aata hai, khud bana bc

/*
output: 0 2 0.000000 2.000000
i. not valid. no assignment to any variable to store information in.
ii. valid.
iii. not valid. assignment is a left side operand.
iv. valid.
v. not valid. ** is exponential in python however in C we can implement it with a in-built fuction of library math.h called pow(x,y) or build our own defined fucntion
*/
void add(int x, int y){
  int z; //error it's int not Int. C is a case-sensitive language.
  z = x+y;
  x=x+10;
  y=y++;
  printf("%d%d%d",x,y,z);
}
/*
i) errors: Int z, line 11; space between # (preprocessor directive) and include
ii) output: 10202020301020
b) while and do-while
while loop:
#include <stdio.h>
int main()
{
    int i = 10;

    while (i <= 5)
    {
        printf("%d\n", i);
        ++i;
    }

    return 0;
}
checks condition first then transfers execution.
do-while:
#include <stdio.h>
int main()
{
    int i = 10;

    do
    {
        printf("%d\n", i);
        ++i;
    } while (i <= 5)

    return 0;
}
executes at least once then checks the condition.
*/
