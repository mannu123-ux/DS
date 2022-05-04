#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int val;
    struct stack*next;
}stk;

stk * temp=NULL;

stk * push(stk*t,int x)
{
    temp=(stk*)malloc(sizeof(stk));
    if(temp==NULL)
        printf("Memory is not allacated\n");
    else
    {
        temp->val=x;
        temp->next=t;
        t=temp;
    }
    return t;
}

stk* pop(stk*t)
{
    if(t==NULL)
        printf("Under flow\n");
    else
    {
        temp=t;
        printf("Delete = %d\n",temp->val);
        t=t->next;
        free(temp);
    }
    return t;
}

void display(stk*t)
{
    temp=t;
    while(temp1!=NULL)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}

void main()
{
    int ele,ch;
    stk*top=NULL;
    do
    {
        printf("Enter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("Enter 3 for display\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                    printf("Enter element\n");
                    scanf("%d",&ele);
                    top=push(top,ele);
                    break;

            case 2:
                    top=pop(top);
                    break;

            case 3:
                    display(top);
                    break;        
        }
    }while(ch<=3);
}
