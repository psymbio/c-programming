#include <stdio.h>
void main()
{


// Smart questions that arise in one's mind when shifting from c++ to c
// Gnu gcc compiler

// Books used Programming With C by Bryon Gottfried Schaum's Outlines
//

// Why is control jumped in a switch case. How does it work? How is it faster than an if-else and else if ladder? What are its working principles?

// Character Truncation calculations
char g = 10, h = 20;
char i = g * h;
printf("%d", i);
printf("\n%c", i);
// https://www.geeksforgeeks.org/integer-promotions-in-c/


char j = '51';
printf("\n%d", j);
// Understand what happens

// Using fx-991ES calculate the % output
// mode > base-n > A−B(A÷B)
// https://math.stackexchange.com/questions/347818/calculate-remainder-on-casio-fx-991-es-calculator

// Escape sequences
printf("Hello Geeks\b\b\b\bF"); // backspace
printf("My mobile number is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a"); // alert
printf("Hello friends");
printf("\v Welcome to GFG"); //vertical tab
printf("\nHello fri \r ends"); // carriage return
printf("\nGoodbye fri \0 ends"); // null
printf("Go to hell fri \f ends"); // form feed
// https://www.geeksforgeeks.org/escape-sequences-c/


if(!printf(""))
// printf("") = 0
// !0 = 1

// null string's "" value is zero
    printf("\nOkkk");
else
    printf("\nHiii");

if(!printf("0"))
    printf("\nHello");
// runs the if condition of printing "0" and doesn't print Hello

if(0)
    printf("\nHEYYYYYYYYY");

// understand precedence of operators
int a = 2, b = 3, d = 7, f = 9, c = 6;
f = 5 + ++f + a + --a - -a + b % c / d;
printf("\n%d", f);

// toupper() tolower() definitions in ctype
//

// Width Modifier and Precision Modifier

// What does it mean to be an unsigned character?
// https://stackoverflow.com/questions/75191/what-is-an-unsigned-char

// What happens if unsigned int is given a negative value?

// double 18/15 significant figures
// float 6 significant figures
// long double 19 significant figures

// if width modifier is less than significant figures output.

// How is data type assigned to variable so seamlessly by #define? Isn't this better if this works a little like python. And if it does why don;t other things work like this?
// how does #define assign data type

// Identifiers can't be more than 31 characters in length
/*Rules for constructing identifiers

1.     The first character in an identifier must be an alphabet or an underscore and can be followed only by any number alphabets, or digits or underscores.
2.     They must not begin with a digit.
3.     Uppercase and lowercase letters are distinct. That is, identifiers are case sensitive.
4.     Commas or blank spaces are not allowed within an identifier.
5.     Keywords cannot be used as an identifier.
6.     Identifiers should not be of length more than 31 characters.
7.     Identifiers must be meaningful, short, quickly and easily typed and easily read.*/
// http://aboutc.weebly.com/identifiers.html

// Why must the first 31 char of identifiers be unique?
// https://stackoverflow.com/questions/19905944/why-must-the-first-31-characters-of-an-identifier-be-unique

// %i and %d difference
// https://stackoverflow.com/questions/19905944/why-must-the-first-31-characters-of-an-identifier-be-unique 



}
