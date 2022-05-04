#include<stdio.h>
#define max 10
int que[max];
int f = -1;
int r = -1;

void insert(int x)
{
    if(f==max-1)
    printf("Overflow\n");
    else{
        if(f==-1)
            f++;

        r++;
        que[r]=x;
    }
}

void delete()
{
    if(f==-1)
        printf("under flow\n");
    else
    {
        printf("Deleted %d",que[f]);
        f++;
        if(f>r)
        {
            f=-1;
            r=-1;
        }
    }
}

void display()
{
    for(int i=f;i<=r;i++)
    {
        printf("%d\n",que[i]);
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
                insert(ele);
                break;

            case 2:
                delete(ele);
                break;

            case 3:
                display();
                break;
        }
    }while(ch<=3);
}