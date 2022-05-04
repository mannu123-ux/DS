#include<stdio.h>
#include<conio.h>
#define max 10
int stack[max];
int flag=0;

int push (int t,int x)
{
    if(t==max-1)
        printf("Satck Overflow\n");
    else{
        t++;
        stack[t]=x;
    }
    return (t);
}

int pop(int t)
{
    if(t==-1)
        printf("Under Flow ");
    else
    {
        printf("Deleted Element is %d ",stack[t]);
        t--;
    }
    return(t);
}

void display(int t)
{
    for(int i=t;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}

void main()
{
    int ele,ch,n;
    int top=-1;
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