#include<stdio.h>
#define max 10
int que[max];
void insert(int x,int *f, int *r)
{
    if(*r == max-1)
        printf("Over Flow\n");
    else
    {
        if(*f==-1)
            *f=0;

        (*r)++;
        que[*r]=x;
    }
    
}

void delete(int *f, int *r)
{
    if(*f==-1)
        printf("Under flow\n");
    else
    {
        printf("delete %d",que[*f]);
        (*f)++;
       
        if(*f>*r)
        {
            *f=-1;
            *r=-1;
        }
    }
}

void display(int f, int r)
{
    for(int i=f;i<=r;i++)
        printf("%d, ",que[i]);
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
                    printf("Enter the number you want to inser\n");
                    scanf("%d",&ele);
                    insert(ele,&f,&r);
                    break;

            case 2:
                    delete(&f,&r);
                    break;

            case 3:
                    display(f,r);
                    break;
        }

    }while(ch<=3);
    return 0;
}
