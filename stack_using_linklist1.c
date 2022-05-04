#include<stdio.h>
#include<malloc.h>
typedef struct stack
{
    int val;
    struct stack *next;
}stk;

stk*temp=NULL;
stk*top=NULL;

void push(int x)
{
    temp=(stk*)malloc(sizeof(stk));
    if(temp==NULL)
        printf("Memory is not allocated\n");

    else{
        temp->val=x;
        temp->next=top;
        top=temp;
    }
}

void pop()
{
    if(top==NULL)
        printf("under flow\n");
    else
    {
        temp=top;
        printf("Delete %d",temp->val);
        top=top->next;
        free(temp);
    }
}

void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d\n",temp->val);
        temp=temp->next;
    }
}

void main()
{
    int ele,ch;
    do{
        printf("Enter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("Enter 3 for display\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter the number you want to insert\n");
                scanf("%d",&ele);
                push(ele);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
        }
    }while(ch<=3);
}