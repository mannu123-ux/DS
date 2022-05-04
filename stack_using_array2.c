#include<stdio.h>
#include<conio.h>
#define max 10
int stack[max];
int top=-1;
int flag=0;

void push (int x)
{
    if(top==max)
    {
        printf("Satck Overflow\n");
    }
    else{
        top++;
        stack[top]=x;

    }
}

int pop()
{
    int c=-1;
    if(top==-1)
        printf("Under Flow ");
    else
    {
        c=stack[top];
        top--;
    }
    return(c);
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
    int ele,ch,n;
    do{
        printf("Enter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("ENter 3 for display\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter the element\n");
                scanf("%d",&ele);
                push(ele);
                break;

            case 2:
                ele=pop();
                if(ele!=-1);
                    printf("Deleted %d",ele);
                break;

            case 3:
                display();
                break;
        }
    }while(ch<=3);
}