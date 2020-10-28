#include <stdio.h>
int main(int argc, char *argv[])
{
    // to read the nth term and print (1^1 + 2^2 + 3^3 ... n^n)'s value
    int n;
    printf("Enter the value of n to find (1^1 + 2^2 + 3^3 ... n^n)'s value ");
    scanf("%d", &n);
    int m = n-1;
    int i = 1;
    printf("\n\n");
    while(i <= m)
    {
        printf("%d^3 + ", i);
        ++i;
    }
    printf("%d^3 = ", n);
    i = 1;
    int f = 1;
    float power = 1;
    while(i <= m)
    {
        f = 1;
        power = 1;
        while (f <= 3)
        {
            power *= i;
            ++f;
        }
        printf("%.0f + ", power);
        ++i;
    }
    f = 1;
    power = 1;
    while (f <= 3)
    {
        power *= n;
        ++f;
    }
    printf("%.0f = ", power);
    i = 1;
    float answer = 0;
    while(i <= n)
    {
        power = 1;
        f = 1;
        while(f <= 3)
        {
            power *= i;
            ++f;
        }
        answer += power;
        ++i;
    }
    printf("%.0f", answer);
    
}
