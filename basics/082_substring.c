#include <stdio.h>

char *substring(char *string, int start, int end); // required otherwise it runs into an errror
// if you used IDE like codeblocks it isn't required (?)

char newstring[80];

int main(int argv, char *argc[]){
        int size;
        printf("Enter the size of a string: ");
        scanf("%d", &size);
        char string[size];
        printf("Enter a string: ");
        scanf("%s", string);
        int start, end;
        printf("Enter new start location of string: ");
        scanf("%d", &start);
        printf("Enter new end location of string: ");
        scanf("%d", &end);
        printf("\nOutput\n\nInitial string: %s\nSubstring: %s", string, substring(string, start, end));
        substring(string, start, end);

        return 0;
}

char *substring(char *string, int start, int end){
        int k, m = 0;
        // char newstring[80];
        for(k = start-1; k < start+end-1-1; k++) {
                newstring[m]=string[k];
                m = m+1;
        }
        newstring[m+1]='\0';
        // printf("%s", newstring); // works
        // return(newstring); <- causes errors like function returns address of a local variable
        // segmentation faults

        // maybe make it a global variable
        return(newstring);

        // you seem to have a problem with returning local strings
}
