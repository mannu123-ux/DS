#include<stdio.h>
#include<malloc.h>
struct student
{
    int rollno;
    int age;
}*s1;
void main()
{
    s1=(struct student*)malloc(sizeof(struct student));
    printf("Enter the roll number of the student\n");
    scanf("%d",&s1->rollno);
    printf("Enter the age of the array\n");
    scanf("%d",&s1->age);
    printf("The roll no of the student is : %d\n",s1->rollno);
    printf("The age of the student is : %d\n",s1->age);
}