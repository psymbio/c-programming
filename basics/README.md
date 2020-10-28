# Learn C the Hard Way
crappy notes on c / just weird questions that seem stupid but actually have some importance that pop up in my head


Smart questions that arise in one's mind when shifting from c++ to c
Gnu gcc compiler

Books used:  
> Programming With C by Bryon Gottfried Schaum's Outlines  
> Learn C The Hard Way by Zed Shaw
> 

Why is control jumped in a switch case. How does it work? How is it faster than an if-else and else if ladder? What are its working principles?

Character Truncation calculations
char g = 10, h = 20;  
char i = g * h;    
printf("%d", i);  
printf("\n%c", i);  
https://www.geeksforgeeks.org/integer-promotions-in-c/

char j = '51';  
printf("\n%d", j);  
Understand what happens  

Using fx-991ES calculate the % output  
mode > base-n > A−B(A÷B)  
https://math.stackexchange.com/questions/347818/calculate-remainder-on-casio-fx-991-es-calculator  


if(!printf(""))  
//null string's "" value is zero  
    printf("\nOkkk");  
else  
    printf("\nHiii");  
if(!printf("0"))  
    printf("\nHello");  
runs the if condition of printing "0" and doesn't print Hello  

if (printf("\0"))  
    printf("Hello");  
else  
    printf("bye");  
    
Backspace character behaviour:  
https://stackoverflow.com/questions/6792812/the-backspace-escape-character-b-unexpected-behavior  
\b depends on the console. It could be a non-destructive backspace.  





    



Width Modifier and Precision Modifier  

What does it mean to be an unsigned character?  
https://stackoverflow.com/questions/75191/what-is-an-unsigned-char  

What happens if unsigned int is given a negative value?  

double 18/15 significant figures  
float 6 significant figures  
long double 19 significant figures  

if width modifier is less than significant figures output.  

How is data type assigned to variable so seamlessly by #define? Isn't this better if this works a little like python. And if it does why don't other things work like this?  
how does #define assign data type  

Identifiers can't be more than 31 characters in length  
http://aboutc.weebly.com/identifiers.html  

Why must the first 31 char of identifiers be unique?  
https://stackoverflow.com/questions/19905944/why-must-the-first-31-characters-of-an-identifier-be-unique  

%i and %d difference  
https://stackoverflow.com/questions/19905944/why-must-the-first-31-characters-of-an-identifier-be-unique  

The difference between '|' and '||'?  
https://stackoverflow.com/questions/7101992/why-do-we-usually-use-not-what-is-the-difference  

Data-type Qualifiers  
https://en.wikipedia.org/wiki/Type_qualifier  

Rules that apply to constants  
https://www.cs.auckland.ac.nz/references/unix/digital/AQTLTBTE/DOCU_010.HTM  
Actually read this. It's fairly interesting.  
This website in general is a gold-mine: https://www.cs.auckland.ac.nz/references/unix/digital/AQTLTBTE/DOCU_154.HTM#book-index  

Non-standard Escape Sequences  
https://en.wikipedia.org/wiki/Escape_sequences_in_C#Non-standard_escape_sequences  

Array Subscrripts  
http://users.ece.utexas.edu/~valvano/embed/chap8/chap8.htm  

Expressions and Operators  
http://users.ece.utexas.edu/~valvano/embed/chap5/chap5.htm  
http://users.ece.utexas.edu/~valvano/embed/chap2/chap2.htm  

Makefile in MinGW  
https://stackoverflow.com/questions/11772602/how-to-compile-makefile-using-mingw  
https://stackoverflow.com/questions/834748/gcc-makefile-error-no-rule-to-make-target  

Why to not use scanf()/ Why scanf() sucks...  
The looooong explanation  
http://c-faq.com/stdio/gets_flush1.html  
Find an alternative.  

printf() Execution and Segementation dump  
https://stackoverflow.com/questions/9469790/execution-of-printf-and-segmentation-fault  

Hello, you could also do it in the following format

printf("Some sentence\n"
       "Another sentence\n"
       "maybe one more sentence?\n"
       "How about a variable: %d\n", variable);




The above examples that people have shown also work, but I recommend doing what makes the most sense to you!

IBM resource
https://www.ibm.com/support/knowledgecenter/en/ssw_ibm_i_71/rzarg/include_next.htm#include_next



