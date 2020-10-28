#include<stdio.h>
void main()
{
int x;
for(x=0; x<100; x++)
if(x%10==5 || x%10==6 || x%10==7 || x%10==8)
printf("%d,",x);
}
