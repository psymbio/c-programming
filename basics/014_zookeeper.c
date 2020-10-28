#include<stdio.h>
typedef struct student
{
    char name[80];
    int roll_no;
    int marks;
}student_details;

void main()
{
    int n;
    printf("\nEnter number of students:");
    scanf("%d",&n);
    student_details student = (student_details*) malloc(size * sizeof(n));;
    student_details *p= &student;

    for(int i=0;i<n;i++)
    {
        printf("Enter details for Student%d\n", i+1);
        printf("Name: ");
        fflush(stdin);
        scanf("%[^\n]s",(*(p+i)).name);
        //scanf("%s",(*(p+i)).name);
        printf("Roll No: ");
        fflush(stdin);
        scanf("%d",&(*(p+i)).roll_no);
        printf("Marks: ");
        fflush(stdin);
        scanf("%d",&(*(p+i)).marks);
    }

         for (int i=0;i<n;i++)
    {
        printf("\n\nInformation about student %d\n",i+1);
        printf("\nName: %s",(*(p+i)).name);
        printf("\nRoll No: %d",(*(p+i)).roll_no);
        printf("\nMarks: %d",(*(p+i)).marks);
    }


}
