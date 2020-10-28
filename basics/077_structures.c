#include <stdio.h>
#include <string.h>
struct item
{
   char name[30];
   int sp, cp, qty;
};

int main()
{
    struct item obj[100];
    int i=1, n;
    int max, min, current;
    char max_prod[30], min_prod[30];
    printf("Enter the number of items: ");
    scanf("%d", &n);
    for(i = 0; i <= n; ++i)
    {
       printf("Enter name, cost price, selling price, qty of product number %d:", i);
       scanf("%s %d %d %d", obj[i].name, &obj[i].cp, &obj[i].sp, &obj[i].qty);
       current= (obj[i].sp)*(obj[i].qty) - (obj[i].cp)*(obj[i].qty);
       if (max<current)
       {
         max=current;
         strcpy(max_prod,obj[i].name);
       }
       if (min>current)
       {
         min=current;
         strcpy(min_prod,obj[i].name);
       }
    }
       printf("Product with maximum profit: %s\nProduct with minimum profit: %s", max_prod, min_prod);

   return 0;
}
