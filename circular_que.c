#include<stdio.h>
#include<malloc.h>

typedef struct circula_que
{
    int val;
    struct circular_que *next;
}que;

que *f=NULL;
que *r=NULL;
que *temp=NULL;

void push(int x)
{
    temp=(que*)malloc(sizeof(que));
    if(temp==NULL)
    {
        printf("Memory is not allocated\n");
    }
    else 
    {
       temp->val=x;
       temp->next=f;
       if(f==NULL)
       {
           f=temp;
           r=temp;
       } 
       else
       {
           r->next=temp;
           r=temp;
       }
    }
}

void pop()
{
    if(f==NULL)
        printf("Underflow\n");
    else if(f==r)
    {
        printf("Delete = %d",f->val);
        f=NULL;
        r=NULL;
    }
    else
    {
        temp=f;
        printf("Delete = %d",f->val);
        f=f->next;
        free(temp);
    }
}

void main()
{
    int ch ,ele;
    do{
        printf("Enter 1 for insert\n");
        printf("Enter 2 for delete\n");
        printf("Enter 3 for display\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("ENter the number you want to insert\n");
                scanf("%d",&ele);
                push(ele);
                break;

            case 2:
                pop();
                break;
        }
    }while(ch<=3);
}