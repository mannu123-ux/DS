#include<stdio.h>
#define max 10
int que[max];

int insert(int ele,int f,int r)
{
    if(r==max-1)
        printf("overflow");
    else
    {
        r++;
        que[r]=ele;
    }
    return r;
}
int delete(int f,int r)
{
    if(f==-1)
        printf("underflow");
    else
    {
        printf("delete %d",que[f]);
        f++;
    }
    return f;
}
void display(int f,int r)
{
    for( int i=f;i<=r;i++)
    {
        printf("%d ",que[i]);
    }
}
int main()
{   int ele,ch;
    int f=-1;
    int r=-1;
    do{
        printf(" \nEnter 1 for insert \n2 for delete p \n3 for Display \n 4 exit");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("enter the element");
            scanf("%d",&ele);
            r=insert(ele,f,r);
            if(f==-1)
                f=r;
            break;
        case 2:
            f=delete(f,r);
            if(f>r)
            {
                f=-1;
                r=-1;
            }
            break;

        case 3:
            display(f,r);
            break;
        }
    }while(ch<=3);
return 0;
}