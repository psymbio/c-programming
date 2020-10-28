#include <stdio.h>
int main(int argc, char *argv[])
{
    // to the power of function
    int m, n;
    printf("Enter two numbers m and n to find m to the power of n: ");
    scanf("%d%d", &m, &n);
    int i = 1;
    float power = 1;
    if (n == 0)
    printf("%d ^ %d = 1", m, n);
    else if (n > 0)
    {
        while (i <= n)
        {
            power *= m;
            ++i;
        }
        printf("%d ^ %d = %.0f", m, n, power);
    }
    else
    {
        unsigned int a = n;
        while (i <= a)
        {
            power /= m;
            ++i;
        }
        printf("%d ^ %d = %.4f", m, n, power);
    }
}
