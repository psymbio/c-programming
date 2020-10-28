#include <stdio.h>
int main(int argv, char *argc[]) {
int choice;
printf("Enter 1 for running code of Goldbach's Conjecture for all even numbers more than 2 less than equal to 500, 2 for a single input: ");
scanf("%d", &choice);
FILE *fptr;
// file to store output: create a file in your local PC and add the file path below to compile
// I have also attached this file
fptr = fopen("/home/vanillaskies/Desktop/discrete_mathematics_in_C/output6.txt", "a+");
       if(fptr == NULL) {
            printf("Unable to open file.\n");
            exit(1);
        }
switch(choice) {
    case 1: ;
            int array_all[300], counter_all = 0;
            // loop to create array of primes
              for (int i = 2; i < 500; i++) {
                  int isprime = 1;
                  for (int j = 2; j < i; j++) {
                      if (i > 1 && j < i && i % j == 0) {
                          isprime = 0;
                          break;
                      }
                  }

                  if (isprime) {
                      array_all[counter_all] = i;
                      counter_all++;
                      }
                }
            printf("\n\n\n");
            // loop to check which primes add up to that number
            for(int num = 4; num <= 500; num += 2) {
              for(int i = 0; i <= counter_all; i++) {
                for(int j = 0; j <= counter_all; j++) {
                  if (((array_all[i]+array_all[j])==num))
                  {
                  printf("The number %d is a sum of %d and %d. \n", num, array_all[i], array_all[j]);
                  fprintf(fptr, "The number %d is a sum of %d and %d. \n", num, array_all[i], array_all[j]);
                  }
                }
              }
              printf("Hence, Goldbach's Conjecture is proved for the number %d. \n\n", num);
              fprintf(fptr, "Hence, Goldbach's Conjecture is proved for the number %d. \n\n", num);
            }
            fclose(fptr);
              break;
    case 2:   ;
              int a;
              printf("Enter an even integer less than 500 to get the output of primes that add up to it: ");
              scanf("%d", &a);
              printf("\n\n\n");
              // terminate program if cases aren't met
              if(a<2 || a%2!=0 || a>500) {
                printf("Terminating program... Input incorrect!");
              }
              int size = a/2;
              int array[size], counter = 0;
              // loop to create array of primes
              for (int i = 2; i < a; i++) {
                  int isprime = 1;
                  for (int j = 2; j < i; j++) {
                      if (i > 1 && j < i && i % j == 0) {
                          isprime = 0;
                          break;
                      }
                  }

                  if (isprime) {
                      array[counter] = i;
                      counter++;
                      }
                }
              // loop to check which primes add up to that number
              for(int i = 0; i <= counter; i++) {
                for(int j = 0; j <= counter; j++) {
                  if ((array[i]+array[j])==a)
                  printf("The prime is a sum of %d and %d. \n", array[i], array[j]);
                }
              }
            break;
    // C doesn't allow a default case in complex program structures
    // default : printf("A valid choice should have been entered. Program Terminated...");

}
  return 0;
}
