#include<stdio.h>

struct student
{
     int rollno;
     //char name="mansi" ;
     int clas;
}s1;

void main()
{
    s1.rollno=101;
    //s1.name={'M','a','n','s','i','\0'};
    s1.clas=12;

    printf("%d\n",s1.rollno);
    //printf("%s\n",s1.name);
    printf("%d",s1.clas);
}

