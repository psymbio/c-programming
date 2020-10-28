#include<stdio.h>
// #include<stdlib>


typedef struct student{
char name [60];
int roll_no;
float marks;
} s[5], *p;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        printf("Record %d", i);
        printf("\nEnter name:");
        scanf("%s", s[i].name);
        printf("\nEnter roll number:");
        scanf("%d", &s[i].roll_no);
        printf("\nEnter marks:");
        scanf("%f", &s[i].marks);
    }
    p = &s[0];
    p = (struct student*) malloc(n * sizeof(struct student));

    for(int i = 0; i < 5; i++)
    {
        printf("Record %d", i);
        printf("\nName: %s", *(p+i)->s[i].name);
        printf("\nRoll number: %d", *(p+i)->s[i].roll_no);
        printf("\nMarks: %s", *(p+i)->s[i].marks);
    }
    return 0;
}
