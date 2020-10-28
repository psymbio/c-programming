#include<stdio.h>
int recursive_division(int numerator, int denominator);
int recursive_remainder(int numerator, int denominator);
int main(){
	int a = 9;
	int b = 3;
    int remainder = recursive_remainder(a,b);
	int answer = recursive_division(a,b);
	printf("%d / %d = %d with a remainder of 0 \n", a, b, answer, remainder);
	return 0;
}
int recursive_division(int numerator, int denominator){
	if( numerator < denominator){
		return 0;
	}
	return recursive_division(numerator-denominator, denominator) + 1;
}

int recursive_remainder(int numerator, int denominator){
	if( numerator < denominator){
		return numerator;
	}
	return recursive_division(numerator-denominator, denominator);
}
