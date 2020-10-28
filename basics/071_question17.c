#include <stdio.h>
int create_x(int a, int b, int c);
int main(int argv, char *argc[])
{
    int x0, a, c, m;
    printf("Enter value for variables of the equation x(n)=(a*x(0)+ c)mod m: \n");
    printf("Enter m's value for m > 2: ");
    scanf("%d", &m);
    printf("Enter a's value for 2 <= a < %d: ", m);
    scanf("%d", &a);
    // check conditions and until they are met continue
    while (a < 2 || a >= m)
    {
        printf("Incorrect input...");
        printf("\nEnter a's value for 2 <= a < %d: ", m);
        scanf("%d", &a);

    }
    printf("Enter c's value for 0 <= c < %d: ", m);
    scanf("%d", &c);
    while (c < 0 || c >= m)
    {
        printf("Incorrect input...");
        printf("\nEnter c's value for 0 <= c < %d: ", m);
        scanf("%d", &c);
    }
    printf("Enter x0's value for 0 <= x0 < %d: ", m);
    scanf("%d", &x0);
    while (x0 < 0 || x0 >= m)
    {
        printf("Incorrect input...");
        printf("\nEnter x0's value for 0 <= x0 < %d: ", m);
        scanf("%d", &x0);
    }
    printf("\nPsuedorandom Numbers Generated: \n");
    for (int i=1; i < 100; i++)
    {
            printf("x(%d) = %d \n", i, create_x(a, c, m));
    }

    return 0;
}


int create_x(int a, int c, int m)
{
    // random number generation function
    int x = (a*x +c)%m;
    return x;

}
