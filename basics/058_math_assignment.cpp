#include<stdio.h>
#include<iostream>

#include<math.h>
using namespace std;
int main(int argv, char *argc[]) {
  int a;
  cout<<"Enter an even integer less than 500 to get the output of primes that add up to it";
  cin>>a;
  if(a<2 || a%2!=0 || a>500) {
    cout<<"Terminating program... Output incorrect!";
  }
  int array[], counter = 0;
  for (int i = 1; i < a; i++) {
      boolean isprime = true;
      for (int j = 2; j < i; j++) {
          if (i > 1 && j < i && i % j == 0) {
              isprime = false;
              break;
          }
      }

      if (isprime) {
          array[counter] = i;
          counter++;
  for(int i = 0; i <= counter; i++) {
    for(int j = 0; j <= counter; j++) {
      if ((array[i]+array[j])==a)
      cout<<"The prime is a sum of"<<array[i]<<" and "<<array[j];
    }
  }
  return 0;
}
