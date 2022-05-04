#include<stdio.h>
#include<conio.h>
#define max 10
int stack[max];
int top = -1;
 

void push(int x)
{
    if(top==max-1)
        printf("Stack overflow\n");

    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top==-1)
        printf("under flow\n");
    else
    {
        printf("Deleted %d",stack[top]);
        top--;
    }
}

void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}

void main()
{
    int ele,ch;
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
                    push(ele);
                    break;

            case 2:
                    pop();
                    break;

            case 3:
                    display();
                    break;        
        }
    }while(ch<=3);
}