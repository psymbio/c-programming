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
        printf("%d^%d + ", i, i);
        ++i;
    }
    printf("%d^%d = ", n, n);
    i = 1;
    int f = 1;
    float power = 1;
    while(i <= m)
    {
        f = 1;
        power = 1;
        while (f <= i)
        {
            power *= i;
            ++f;
        }
        printf("%.0f + ", power);
        ++i;
    }
    f = 1;
    power = 1;
    while (f <= n)
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
        while(f <= i)
        {
            power *= i;
            ++f;
        }
        answer += power;
        ++i;
    }
    printf("%.0f", answer);
}
