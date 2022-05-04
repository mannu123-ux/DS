#include<stdio.h>
#define max 10
int que[max];

int insert(int r,int x)
{
    if(r==max-1)
    {
        printf("over flow\n");
    }
    else{
        r++;
        que[r]=x;
    }
    return r;
}

int delete(int f)
{
    if(f==-1)
    {
        printf("underflow\n");
    }
    else{
        printf("Delete %d",que[f]);
        f++;
    }
    return f;
}

void display(int f,int r)
{
    for(int i=f;i<=r;i++)
    {
        printf("%d\n",que[i]);
    }
}

int main()
{
    int ele,ch,f=-1,r=-1;
    do{
        printf("Enter 1 for insert\n");
        printf("Enter 2 for delete\n");
        printf("Enter 3 for display\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                    printf("Enter the number you want to insert\n");
                    scanf("%d",&ele);
                    r=insert(r,ele);
                    if(f==-1)
                    {
                        f=r;
                    }
                    break;

            case 2:
                    f=delete(f);
                    if(f>r)
                    {
                        f=-1;
                        r=-1;
                    }
                    break;
            case 3:
                    display(f,r);
        }
    }while(ch<=3);
    return 0;
}