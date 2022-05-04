#include<stdio.h>
#include<malloc.h>
    struct student
    {
        int rollno;
        int age;
    }*s1=NULL;


void main()
{
    s1=(struct student *)malloc(sizeof(struct student));
    s1->rollno=10;
    s1->age=20;
    printf("\nRoll no of the student %d\n",s1->rollno);
    printf("\nAge of the student %d",s1->age);
}