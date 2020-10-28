#include <stdio.h>

//void funct1(int u); /*function prototype*/
//void funct2(int *pu); /*function prototype*/
//IMP: remember to input *pu as an argument not u

void main()
{
    int a=1;

    printf("\n Before calling funct1: a=%d",a);
    funct1(a);
    printf("\n After calling funct1: a=%d", a);

    printf("\n Before calling funct2: a=%d",a);
    funct2(&a);
    //note the argument for the function can be *pu or &a, any one of them is valid
    printf("\n After calling funct2: a=%d", a);
}

void funct1(int u)
{
    u++;
    printf("\n Within the funct1: a=%d",u);
    return;
}
void funct2(int *pu)
{
    //*pu++;
    *pu = *pu + 1;
    printf("\n Within the funct2: a=%d",*pu);
    //*pu++;
    //printf("\n Within the funct2: a=%d",*pu);
    return;
}
