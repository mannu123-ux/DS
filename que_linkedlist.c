#include<stdio.h>
#include<malloc.h>
#define max 10
typedef struct ques
{
    int val;
    struct ques*next;
}que;
que *f=-1;
que *r=-1;
que *temp=NULL:


void insert(int x,que *r)
{
     temp=(que*)malloc(sizeof(que));
     if(temp==NULL)
        printf("memory is not allocated\n");
    else
    {
        temp->val=x;
        r=r->next;
        if(r==0)
        {
           f=r; 
        }
    }
}

int delete(int *f)
{
       
       
}

void display(int *r,int *f)
{
  
  
}

int main()
{
    int ele,ch;
    do
    {
        printf("Enter 1 for insert\n");
        printf("Enter 2 for Delete\n");
        printf("Enter 3 for Display\n");
        printf("Enter 4 for exit\n");
        printf("Please enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
         case 1:
            printf("Enter the number you want to insert\n");
            scanf("%d",&ele);
            r=insert(ele,*r);
            if(f==-1)
                f=r;
            break;

        case 2:
            f=delete(*f);
             if(f>r)
            {
            f=-1;
            r=-1;
            }
            break;

        case 3:
            display(*r,*f);
            break;

        case 4:
            break;
        }
    } while (1);
    
}