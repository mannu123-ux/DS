#include<stdio.h>
#include<string.h>
typedef struct student
{
    int roll;
    int class1;
    char name[100];
}std;

void main()
{
    std s1[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the roll number of the student %d\n",i+1);
        scanf("%d",&s1[i].roll);
        printf("Enter the class of the student %d\n",i+1);
        scanf("%d",&s1[i].class1);
        printf("Enter the name of the student %d\n",i+1);
        scanf("%s",s1[i].name);
    } 

    for(int i=0;i<3;i++)
    {
        printf("Roll number of stdent %d is = %d\n",i+1,s1[i].roll);
        printf("Class of the student %d is = %d\n",i+1,s1[i].class1);
        printf("The name of the student %d is %s\n",i+1,s1[i].name);
    }
     
}